#include<stdio.h>

main(){

    int N[1000],i,T,X=-1;

    scanf("%d",&T);

    for(i=0;i<=999;i++){

    if(X<T-1){
        X++;
        N[i]=X;
    }

    else{
        X=0;
        N[i]=X;
    }

    printf("N[%d] = %d\n",i,N[i]);

    }



}
