#include<stdio.h>

int main()
{
    char str[201];

    scanf(" %[^\n]", str);

    int len = strlen(str);
    int temp, i, j;

    for(i=0, j=len-1; i<len/2; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    for(int i=0; i<len; i++){
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
