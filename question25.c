#include <stdio.h>

int main() {
    int arr[6]={2,3,4,5,6,7};
    int max=1;
    int second_max=0;
    for (int i = 0; i < 6; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    
    for (int i = 0; i < 6; i++)
    {
        if (arr[i]!=max && second_max<arr[i] )
        {
            second_max=arr[i];
            
        }
           
    }
    printf("%d",second_max);
    
    return 0;
}