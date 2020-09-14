#include<stdio.h>
int main()
{
   int T, i, N, lsd, msd;

   scanf("%d",&T);

   for(i=1;i<=T;i++){

        scanf("%d",&N);
        lsd = N%10;

        while(N/10!=0){
                msd = N/10;
                N = msd;
            }
        printf("Sum = %d\n", lsd+msd);
    }

   }


