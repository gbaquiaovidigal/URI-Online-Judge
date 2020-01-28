#include<stdio.h>

main(){

    int N[100],i;
    double T;

    scanf("%lf",&T);

    for(i=0;i<=99;i++){

        printf("N[%d] = %.4lf\n",i,T);
        T=T/2;

    }

}
