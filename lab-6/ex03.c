#include <stdio.h>
#include <math.h>

struct coordinate
{
    double x, y;
}coor[2];

int main()
{
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("x%d: ", i+1);
        scanf("%lf", &coor[i].x);
        printf("y%d: ", i+1);
        scanf("%lf", &coor[i].y);
    }

    double dx = coor[1].x - coor[0].x;
    double dy = coor[1].y - coor[0].y;
    double d = sqrt(dx * dx + dy * dy);

    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s).\n", coor[0].x, coor[0].y, coor[1].x, coor[1].y, d);

    return 0;
}