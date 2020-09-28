#include<stdio.h>

long long int fact(long long int n)
{
    long long int i, mul=1;

    for(i=1; i<=n; i++)
    {
        mul = mul*i;
    }
    return mul;
}

int main()
{
    int T, i;
    long long int n;
    double sum;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%lld", &n);

        sum = 0.0;

        for(i=1; i<=n; i++)
        {
            sum += ((double)i/fact(i));
        }
        printf("%0.4lf\n", sum);
    }
}
