#include<stdio.h>
int main()
{
    int i,j;
    for(i='E';i>='A';i--)
    {
        for(j='E';j>=i;j--)
        {
            
            printf("%c",j);
        }
        printf("\n");
    }
    
    return 0;
} 