#include<stdio.h>
#include<string.h>

int main()
{
    int T, i, j, k, l;

    int count[26];
    char S[1001];

    scanf("%d", &T);

    for(i=1; i<=T; i++){

        scanf("%s", &S);

        for(k=0; k<26; k++){
            count[k]=0;
        }

       for(j=0; j<strlen(S); j++){
        if(S[j] >= 'a' && S[j] <= 'z'){
            count[S[j]-'a']++;
        }
       }
        for(l=0; l<26; l++){
            if(count[l] != 0){
                printf("%c = %d\n", 'a'+l, count[l]);
        }
    }
     if(i<T)
         printf("\n\n");
    }
    return 0;
}
