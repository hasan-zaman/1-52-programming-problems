#include<stdio.h>
int main()
{
    int T, N, i, j, x;

    scanf("%d", &T);

    for(x=1; x<=T; x++)
    {
        scanf("%d", &N);

        for(i=1; i<=N; i++)
        {
            for(j=1; j<= N; j++){
                printf("*");
            }
            printf("\n");
        }
        if(x<T)
           printf("\n");
    }
    return 0;
}
