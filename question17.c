#include <stdio.h>
//#include<limits.h>

int main() {
    int arr[5]={5,7,0,2,1};
    int mini=10;
    //int mini=INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (mini>arr[i])
        {
            mini=arr[i];
        }
        
    }
    printf("%d",mini);
    
    return 0;
}