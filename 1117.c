#include<stdio.h>

main(){

    int cont=0;
    double X,Conta,Media=0;

    do{

    scanf("%lf",&X);

    if((0<=X)&&(X<=10)){
        Conta=X/2;
        Media=Media+Conta;

        cont++;}

    else{
        printf("nota invalida\n");
    }


    }while(cont<2);

    printf("media = %.2lf\n",Media);

}
