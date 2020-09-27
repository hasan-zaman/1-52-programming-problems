#include<stdio.h>
#include<string.h>

int main()
{
    int T, i, j;
    char S[10001];

    scanf("%d", &T);

    for(i=1; i<=T; i++)
    {
        scanf(" %[^\n]", S);

        for(j=0; j<strlen(S); j++){
            if((S[j]>=65 && S[j]<=90) || (S[j]>=97 && S[j]<=122)){
                if(S[j]=='a' || S[j]=='e' || S[j]=='i' || S[j]=='o' || S[j]=='u' || S[j]=='A' || S[j]=='E' || S[j]=='I' || S[j]=='O' || S[j]=='U'){
                    printf("%c", S[j]);
                }
            }
        }
        printf("\n");

        for(j=0; j<strlen(S); j++){
            if((S[j]>=65 && S[j]<=90) || (S[j]>=97 && S[j]<=122)){
                if(S[j]!='a' && S[j]!='e' && S[j]!='i' && S[j]!='o' && S[j]!='u' && S[j]!='A' && S[j]!='E' && S[j]!='I' && S[j]!='O' && S[j]!='U' && S[j] != '\0'){
                    printf("%c", S[j]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
