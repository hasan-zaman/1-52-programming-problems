#include<stdio.h>

int main()
{
    int T, X, K, i, sum, power;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d %d", &X, &K);

        power=1, sum=1;

        for(i=1; i<=K; i++)
        {
            power = power * X;
            sum = sum + power;
        }
        printf("Result = %d\n", sum);
    }
    return 0;
}
