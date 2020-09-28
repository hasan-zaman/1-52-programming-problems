#include<stdio.h>
#include<math.h>

int main()
{
    int T, a, b, c;

    double s, area;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d %d %d", &a, &b, &c);

        if(a+b<c||b+c<a||c+a<b){
             printf("Oh, No!\n");
        }
        else
        {
                s = (a+b+c)/2;
                area = sqrt(s*(s-a)*(s-b)*(s-c));

            printf("%0.2lf\n", area);
        }

    }
    return 0;
}
