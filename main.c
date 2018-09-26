#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    
    while(fgets(str, sizeof(str), stdin)){
        printf("%s", str);
    }
    
    return 0;
}
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
