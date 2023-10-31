#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    double m;
    scanf("%d%d",&i,&j);
    if(i>0){
        if(i>120){
            m=60*j+60*j*1.33+(i-120)*1.66*j;
            printf("%.1lf",m);
        }
        else if(i<=120&&i>60){
            m=60*j+(i-60)*1.33*j;
            printf("%.1lf",m);
        }
        else if(i<=60){
            m=i*j;
            printf("%.1lf",m);
        }
    }
    return 0;
}


