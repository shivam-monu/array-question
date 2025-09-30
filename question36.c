#include <stdio.h>
#include<stdbool.h> // only in c program

int main() {
    int arr[6]={1,2,3,4,5,6};
    int x=5;
    int index=-1;
    bool target=false; //0 is represent that array elememt is not present in the array
    for (int i = 0; i < 6; i++)
    {
        if (arr[i]==5)
        {
            x=true;
            index=i;
        }
        
    }
    if (x==false)
    {
        printf("%d array element not present in array",x);
    }
    else{
        printf("%d is array element is present in array and index is%d ",x,index);
    }
    
    

    
    return 0;
}