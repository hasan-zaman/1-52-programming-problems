#include<stdio.h>

int main()
{
    int T,N, i, j;
    long long int factorial =1;
    scanf("%d",&T);

    for(i=1;i<=T;i++){

        scanf("%d",&N);
        factorial =1;

        for(j=2;j<=N;j++){
            factorial=factorial*j;
        }

        printf("%lld\n",factorial);
    }

    return 0;
}
