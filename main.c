#include <stdio.h>

int main(int argc, char *argv[])
{
    char str[5];

    while(fgets(str, sizeof(str), stdin)){

        printf("%s", str);

    }
    
    int array[100];
    int i=0;
    int n;
  
      if(n<0){
      printf("%d\n",array[n]);
      }
      else if(n>=0){
        array[i]=n;
        i++;
    }
    
    return 0;
}
