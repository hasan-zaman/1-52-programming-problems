#include<stdio.h>
#include<string.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        char str1[50];

        scanf("%s", str1);

        int str1_len = strlen(str1);

        for(int i=0; i<str1_len; i++)
        {
            if(str1[i]=='L')
                str1[i] = str1[i-1];
            else if(str1[i]=='R')
                str1[i] = str1[i+1];
        }
        printf("%s\n", str1);
    }
    return 0;
}
