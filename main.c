#include <stdio.h>

int main(int n)
{
    int array[100],i;
    
    for(i=0;i<100;i++){
        if(n>=0)
            array[i]=n;
        else
            printf("%d\n",array[n])
    }
    return 0;
}
