#include <stdio.h>

int main() {
    int arr[6]={2,3,4,5,6,7};
    int max=1;
    int second_max=1;
    for (int i = 0; i < 6; i++)
    {
        if (max<arr[i])
        {
            second_max=max;
            max=arr[i];
        }
              
    }
    printf("%d",second_max);
    
    return 0;
}