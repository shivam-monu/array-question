#include <stdio.h>

int main() {
    int arr[5]={2,4,4,9,3};
    int max=0;
    int second_max=0;
    for (int i = 0; i < 5; i++)
    {
        if (max<arr[i])
        {
          
            max=arr[i];
        }
        else if (second_max<arr[i] && max!=arr[i])
        {
            second_max=arr[i];
        }
        
        
    }
    printf("%d",second_max);
    

    return 0;
}