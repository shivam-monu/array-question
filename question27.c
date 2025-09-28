#include <stdio.h>

int main() {
    int arr[5]={9,7,6,5,2};
    int max=1;
    int second_max=1;
    for (int i = 0; i < 5; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        else if(second_max<arr[i]){
            second_max=arr[i];
        }
        
    }
    printf("%d",second_max);
    
    return 0;
}