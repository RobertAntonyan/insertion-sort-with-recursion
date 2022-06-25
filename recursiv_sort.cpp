#include <iostream>
const int size = 5;
void print_arr(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
void sort_arr(int *arr, int size)
{
    for (int j = 1; j < size; ++j)
    {
        int key = arr[j];
        int i = j - 1;
        while (i >= 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            --i;
        }
        arr[i + 1] = key;
    }
}
void insertsort_arr(int* arr, int size)
{
    if(size)
    {
        insertsort_arr( arr, size-1);
        sort_arr(arr, size);
    }
}

int main()
{
    int arr[size] = {155, 222, 75, 10, 45};
    print_arr(arr,size);
    insertsort_arr(arr,size);
    print_arr(arr,size);
}
