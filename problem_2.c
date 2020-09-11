#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,length;
    char n [101];

    scanf("%d",&T);

    for(i=1;i<=T;i++){
        scanf("%s",&n);
        length = strlen(n);

        if(n[length-1]%2==0)
            printf("even\n");
        else
            printf("odd\n");
          }
    return 0;
}

