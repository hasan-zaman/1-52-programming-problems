#include<stdio.h>
int main()
{
    int i;

    for(i=1000;i>0;){

        printf("%d\t",i);

        i=i-1;

        if(i%5==0 && i!=1000)
            printf("\n");

    }
    return 0;
}
