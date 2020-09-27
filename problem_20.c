#include<stdio.h>
#include<string.h>

int main()
{
    int T, count, i;
    char S[100001];
    char *word;

    scanf("%d", &T);

    for(i=1; i<=T; i++){
        scanf(" %[^\n]", S);

        count=0;
        word = strtok(S, ",!;?. ");

        while(word != NULL)
        {
            if(strlen(word)>0){
                count++;
            }
            word = strtok(NULL, ",!;?. ");
        }
        printf("Count = %d\n", count);
    }
    return 0;
}
