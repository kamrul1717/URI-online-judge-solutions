#include <stdio.h>
int main()
{
    char name[10];
    double s, p, total, x;
    scanf("%s %lf %lf", name, &s, &p);
    x = p*0.15;
    total=s+x;
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
