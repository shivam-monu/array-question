#include <stdio.h>

int main() {
    int arr[6]={3,4,5,6,7,8};
    int evenindex_sum=0;
    int oddindex_sum=0;
    for (int i = 0; i <6; i++)
    {
        if (i%2==0)
        {
            evenindex_sum+=arr[i];
        }
        else{
            oddindex_sum+=arr[i];
        }

        
    }
    printf("%d %d %d",evenindex_sum,oddindex_sum,oddindex_sum-evenindex_sum);
    
    return 0;
}