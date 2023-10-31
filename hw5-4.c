#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m;
    scanf("%d%d",&h,&m);
    float ha=(float)h*30+0.5*m;
    float ma=(float)m*6;
    float d= ha-ma;
    if(d<0){
        d=-d;
        printf("%.3f",d);
    }
    if(d>180){
        d=360-d;
        printf("%.3f",d);
    }
    else{
        printf("%.3f",d);
    }
    return 0;
}
