#include <stdio.h>
int main()
{
    int a, b, i;
    float c, sum=0.0, m;
    for(i=1; i<=2; i++)
    {
        scanf("%d %d %f", &a, &b, &c);
        m=b*c;
        sum=sum+m;
    }
    printf("VALOR A PAGAR: R$ %.2f\n", sum);
    return 0;
}
