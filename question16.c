#include <stdio.h>
#include <limits.h>

int main() {
    int arr[6]={5,1,2,7,8,9};
    int max =INT_MIN;
    for (int i = 0; i <6 ; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    printf("%d",max);
    
    return 0;
}