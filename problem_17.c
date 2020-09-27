#include<stdio.h>
#include<string.h>

int main()
{
    int T, i, j, count;
    char S[1002];

    scanf("%d", &T);

    for(i=1; i<=T; i++)
    {
        scanf(" %[^\n]", S);

        for (int j = 0; j<strlen(S); j++) {
                if (S[j] >= 65 && S[j] <= 90) {
                    S[j] += 32;
                }
            }

        for(j=0, count=0; j<strlen(S); j++)
        {
            if(S[j] == 'a' || S[j] == 'e' || S[j] == 'i' || S[j] == 'o' || S[j] == 'u'){
                    count++;
            }
        }
        printf("Number of vowels = %d\n", count);

    }
    return 0;
}
