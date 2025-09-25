#include <stdio.h>

int main() {
    int arr[5]={2,4,6,7,5};
    arr[4]=100; //{2,4,6,7,100} //change the value in array
    arr[1]=1;  //{2,1,6,7,100}
    printf("%d",arr[3]);


    
    return 0;
}