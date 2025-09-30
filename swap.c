#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void print_arr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ,", *(arr + i));
    }
    printf("\n");
}

int main()
{
    const int size=5;
    int arr[5] = {1, 2, 3, 4, 5};
    print_arr(arr, size);
    int start=0;
    int end=size-1;
    while (start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    print_arr(arr,size);
    int k=2;
    int q=size-1;
    while (k<q)
    {
        int temp=arr[k];
        arr[k]=arr[q];
        arr[q]=temp;
        k++;
        q--;
    }
    print_arr(arr,size);
    
    

    
}