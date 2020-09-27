#include<stdio.h>

int main()
{
    int T, i, j, count;
    char S[100001];

    scanf("%d", &T);

    for(i=1; i<=T; i++){
        scanf(" %[^\n]", S);
        for(j=0, count=0; j<strlen(S); j++){
            if((S[i]>=65 && S[i]<=90) || (S[i]>=97 && S[i]<=122)){
                if(S[j] == ' '){
                    count++;
                }
            }
        }
        printf("Count = %d\n", count+1);
    }
    return 0;
}
