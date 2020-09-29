#include<stdio.h>

int main()
{
    int T, n1, n2, i, j, k;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &n1);

        int ara1[n1];

        for(i=0; i<n1; i++){
            scanf("%d", &ara1[i]);
        }

        scanf("%d", &n2);
        int ara2[n2];

        for(i=0; i<n2; i++){
            scanf("%d", &ara2[i]);
        }

        int n3=n1+n2;
        int ara3[n3];

        k=0,i=0,j=0;

        while(i<n1 && j<n2){
            if(ara1[i]<ara2[j]){
                ara3[k] = ara1[i];
                i++;
            }
            else{
                ara3[k] = ara2[j];
                j++;
            }
            k++;
        }
        if(i>=n1){
            while(j<n2){
            ara3[k] = ara2[j];
            j++;
            k++;
        }
        }
        else{
            while(i<n1){
            ara3[k]= ara1[i];
            k++;
            i++;
        }
        }

        for(i=0; i<n3; i++){
            printf("%d", ara3[i]);
            if(i!=n3-1)
               printf(" ");
        }
        printf("\n");

    }
    return 0;
}
