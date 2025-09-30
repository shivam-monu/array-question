#include <stdio.h>

int main() {
    int arr[5]={2,4,6,4,2};
    int is_palidrome=1;
    for (int i = 0; i < 5/2; i++)
    {
        if (arr[i]!=arr[4-i])
        {
            is_palidrome=0;
            break;
        }
        
    }
    if (is_palidrome==1)
    {
        
        printf("this is  palidrome\n");
    }
    else{
         printf("this is not palidrome\n");

    }
    
    
    
    return 0;
}