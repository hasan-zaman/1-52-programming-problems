#include <stdio.h>

int main()
{
    int T, i, r1, r2, B;
    double ball_played, target, current_rr, required_rr;

    scanf("%d", &T);

    for(i = 1; i<=T; i++)
    {
        scanf("%d %d %d", &r1, &r2, &B);

        target = r1 + 1;

        ball_played = 300 - B;

        if(B == 300)
        {
            current_rr == 0.00;
        }
        else
        {
            current_rr = (r2 / ball_played)*6.0;
        }

        if(r2 > r1)
        {
            required_rr = 0.00;
        }
        else
        {
            required_rr = ((target - r2)/B)*6.0;
        }

        printf("%0.2lf %0.2lf\n", current_rr, required_rr);
    }
    return 0;
}
