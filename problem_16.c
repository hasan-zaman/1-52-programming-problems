#include<stdio.h>
#include<string.h>

char reverse_word(char word[])
{
    int i, length= strlen(word);

    for(i= length-1; i>=0; i--)
    {
        printf("%c", word[i]);
    }
}

int main()
{
    int T, i, j, k;
    char S[1002], word[100];

    scanf("%d", &T);

    for(i=1; i<=T; i++)
    {
        scanf(" %[^\n]", S);

        for(j=0, k=0; j<strlen(S); j++){
            if(S[j] !=' ')
            {
                word[k] = S[j];
                k++;
            }
            else
            {
                word[k]= '\0';
                reverse_word(word);
                printf(" ");
                k=0;
            }
        }
        if(k>0)
            {
                word[k] = '\0';
                reverse_word(word);
                printf("\n");
                k=0;
            }
    }
    return 0;
}
