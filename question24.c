#include <stdio.h>

int main() {
    int arr[5]={2,4,6,7,8};
    int x=12;
    int totalpair=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            for (int k=i+2; k < 5; k++)
            {
                if (arr[i]+arr[j]+arr[k]==x)
                {
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                    totalpair++;
                }
                
            }
            
        }
        
    }
    printf("%d",totalpair);
    
    return 0;
}