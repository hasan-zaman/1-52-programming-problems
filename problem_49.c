#include <stdio.h>
#include <math.h>

int is_prime(long long int num)
{
    int i, j, root;

    if (num < 2) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;

    root = sqrt(num);

    for (i = 3; i <= root; i = i + 2){
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main ()
{
    int T;
    long long int N;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%lld", &N);

        if(is_prime(N)==1)
        {
            printf("%lld is a prime\n", N);
        }
        else
        {
            printf("%lld is not a prime\n", N);
        }
    }

    return 0;
}
