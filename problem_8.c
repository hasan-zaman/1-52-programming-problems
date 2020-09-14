#include<stdio.h>
int main()
{
    int T,a,b,c,i,temp;

    scanf("%d",&T);

    for(i=1;i<=T;i++){

        scanf("%d %d %d",&a,&b,&c);

        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(b>c)
        {
            temp=b;
            b=c;
            c=temp;
        }
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        printf("Case %d: %d %d %d\n",i,a,b,c);
    }
    return 0;
}

