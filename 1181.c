#include<stdio.h>

main(){

    int L,i,j;
    char T;
    double M[12][12],Soma;

    Soma=0;

    scanf("%d",&L);
    scanf(" %c",&T);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){


            scanf("%lf",&M[i][j]);


        if(L==i){
            Soma=Soma+M[i][j];


        }
        }
    }

    if(T== 'M' ){

                printf("%.1lf\n",Soma/12);
            }

    else if(T== 'S'){
                printf("%.1lf\n",Soma);
            }




}
