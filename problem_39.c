#include<stdio.h>
#include<string.h>

int main()
{
    char string1[1001], string2[1001];
    int T, i, j, length;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%s", string1);

        length = strlen(string1);

        for(i=0, j=length-1; j>=0; i++, j--)
        {
            string2[i] = string1[j];
        }
        string2[i]='\0';

        if(strcmp(string1, string2)==0)
            printf("Yes! It is Palindrome!\n");
        else
            printf("Sorry! It is not Palindrome\n");
    }
    return 0;
}
