#include<stdio.h>
#include<string.h>

int main()
{
    int T,i, j, count;
    char first_line[10001];
    char second_line[2];

    scanf("%d", &T);

    for(i=1; i<=T; i++){
        scanf(" %[^\n]", first_line);
        scanf("%s", second_line);

        count = 0;

        for(j=0; j<strlen(first_line); j++){
            if(first_line[j] == second_line[0])
                count++;
        }
        if(count ==0){
            printf("'%c' is not present\n", second_line[0]);
        }
        else{
             printf("Occurrence of '%c' in '%s' = %d\n", second_line[0], first_line, count);
        }
    }
    return 0;
}
