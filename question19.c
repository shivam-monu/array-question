#include <stdio.h>
void fun(int x[]){
    int temp=x[0];
    x[0]=x[1];
    x[1]=temp;
    return;
}

int main() {
    int arr[5]={5,2,6,7,8};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr); 
    printf("%d %d\n",arr[0],arr[1]);
    return 0;
}