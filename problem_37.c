#include<stdio.h>
#include<string.h>

int main()
{
        int i, j, N;

        scanf("%d",&N);

        char name[N][1000];
        char temp[1000];

        for(i=0; i<N; i++)
        {
            scanf("%s", name[i]);
        }

        for(i=0; i<N; i++)
        {
            for(j=i; j<N; j++)
            {
                if(strcmp(name[i], name[j])>0)
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }
         for(i=0; i<N; i++)
        {
            printf("%s\n", name[i]);
        }
    return 0;
}
