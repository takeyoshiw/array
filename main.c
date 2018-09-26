#include <stdio.h>

int main(int n) 
{
    int array[100];
    int i;
    for(i=0;i<100;i++){
        if(n>=0)
           array[i]=n;
        else if(n<0)
            printf("%d",array[n])}
    
    return 0;
}
