#include <stdio.h>

int main() {
    int arr[5]={2,3,4,5,6};
    int x=3;
    int count=0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>x)
        {
            printf("%d\n",arr[i]);
            count+=1;
        }
        
    }
    printf("\n%d",count);
    
    return 0;
}