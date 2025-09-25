#include <stdio.h>

int main() {
    int marks[10]={21,25,36,57,59,67,35,14,15,16,};
    for (int i = 0; i <= 9; i++)
    {
        if (marks[i]<35)
        {
            printf("%d ",marks[i]);
        }
        
    }
    
    return 0;
}