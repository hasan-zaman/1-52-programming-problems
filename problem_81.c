//Above Average

#include<stdio.h>

int main()
{
    int T, N;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &N);

        int student[N];
        int i;

        for(i=0;i<N; i++)
        {
            scanf("%d", &student[i]);
        }

        int total_marks=0;

        for(i=0; i<N; i++)
        {
            total_marks = total_marks + student[i];
        }

        double average = (total_marks*1.00/N);

        int above_average=0;

        for(i=0; i<N; i++)
        {
            if(average<student[i])
            {
                above_average++;
            }
        }

        double above_average_percentage;

        above_average_percentage = (above_average*1.00*100)/N;

        printf("%.3lf %\n", above_average_percentage);

        printf("%");
    }
    return 0;
}
