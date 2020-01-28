#include<stdio.h>

main(){

    int X,Y,cont;

    do{

        scanf("%d %d",&X,&Y);

        if(X>Y){
            printf("Decrescente\n");
        }
        else if(Y>X){
            printf("Crescente\n");
        }

        cont++;

    }while(X!=Y);



}
