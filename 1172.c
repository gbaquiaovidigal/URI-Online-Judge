#include<stdio.h>

main(){

    int X[10],i,Neg;

    Neg=1;

    for(i=0;i<=9;i++){
        scanf("%d",&X[i]);
    }

    for(i=0;i<=9;i++){
        if(X[i]>0){
            printf("X[%d] = %d\n",i,X[i]);
        }
        else {
            printf("X[%d] = %d\n",i,Neg);
        }
    }
}
