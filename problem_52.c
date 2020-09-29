#include<stdio.h>
#include<string.h>

int main()
{
    int T, i, j;
    char str1[128], str2[128];

    scanf("%d", &T);

    while(T--)
    {
        scanf("%s %s", str1, str2);

        int str1_len = strlen(str1);
        int str2_len = strlen(str2);
        int count=0;

        for(i=0; i<= (str1_len-str2_len); i++)
        {
            if(str2[0]==str1[i])
            {
                for(j=1; j<str2_len; j++)
                {
                    if(str2[j]!=str1[i+j])
                        break;
                }

                if(j==str2_len)
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}

