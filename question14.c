#include <stdio.h>

int main() {
    int arr[5];
    int product=1;
    for (int i = 0; i < 5; i++)
    {
        printf("enter the arr[] element is\n ",arr[i]);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <5; i++)
    {
        product=product*arr[i];
    }
    printf("\n%d",product);
    
    

    return 0;
}