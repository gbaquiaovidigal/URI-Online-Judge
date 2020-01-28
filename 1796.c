#include<stdio.h>

main(){

    int Q,opiniao,cont,Qtd0=0,Qtd1=0;

    scanf("%d",&Q);

    if((4<=Q)&&(Q<=233000)){

        for(cont=0;cont<Q;cont++){
        scanf("%d",&opiniao);



    if(opiniao==1){
        Qtd1=Qtd1+1;


        }
    else if(opiniao==0){
        Qtd0=Qtd0+1;
        }
        }
    if(Qtd0>Qtd1){
    printf("Y\n");
    }
    else if(Qtd1>=Qtd0){
    printf("N\n");
    }


    }


}
