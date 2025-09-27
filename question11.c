#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (i = 1; i <=size; i++)   //not define the i data type
    {
        scanf("%d",arr[i]);
        printf("%d",arr[i]);
        
    }
    
    return 0;
}