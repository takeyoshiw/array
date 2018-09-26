#include <stdio.h>

int main(int n)
{
    int array[100];
    int i=0;
    
    while(n>100){
      if(n<0)
        printf("%d\n",array[n])
    else if(n>=0){
        array[i]=n;
        i++;
    }else
        break;
    }
    
    return 0;
}
