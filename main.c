#include <stdio.h>

int main(int n)
{
    int array[100];
    int i=0;
    
    if(n<0)
        printf("%d",array[n]);
    else{
        array[i]=n;
        i++;
    }
        
    return 0;
}
