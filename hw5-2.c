#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double m;
    scanf("%d",&i);
    if(i>0){
        if(i>1500){
            m=i*0.9*0.79;
            printf("%.1lf",m);
        }
        else if(i<=1500 && i>800){
            m=i*0.81;
            printf("%.1lf",m);
        }
        else if(i<=800){
            m=i*0.9;
            printf("%.1lf",m);
        }
    }
    return 0;
}

