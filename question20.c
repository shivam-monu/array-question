#include <stdio.h>

int main() {
    int arr[5]={1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        if (i==0 || i==2 || i==4) {
            arr[i]=arr[i]*2;
        }
        else
         arr[i]=arr[i]+10;
        
        
    }
    for (int i = 0; i < 5; i++)
    {
        
        printf("%d\n",arr[i]);
    }
    
    

    return 0;
}