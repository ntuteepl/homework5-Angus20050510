#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tmpc;
    double tmpf;
    scanf("%f",&tmpc);
    tmpf=tmpc*1.8+32;
    tmpf=(int)(tmpf*10+0.5)/10.0;
    printf("%.1lf\n",tmpf);
    return 0;
}
