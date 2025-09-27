#include <stdio.h>

int main() {
    int arr[5]={2,4,-9,6,7};
    int max=-2;
    for (int i = 0; i < 5; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    printf("%d",max);
    
    return 0;
}