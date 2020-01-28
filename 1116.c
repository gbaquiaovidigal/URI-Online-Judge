#include<stdio.h>

main(){

    int cont=0,N;
    double Divisao=0,X,Y;

    scanf("%d",&N);

    do{
        scanf("%lf %lf",&X,&Y);

        if(Y!=0){
            Divisao=X/Y;
            printf("%.1lf\n",Divisao);
        }

        else if(Y==0){
            printf("divisao impossivel\n");
        }

        cont++;
    }while(cont<N);

}
