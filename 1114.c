#include<stdio.h>

main(){

    int senha,cont=0;

    do{
            scanf("%d",&senha);

            if(senha!=2002){
                printf("Senha Invalida\n");
            }

            else if(senha==2002){
                printf("Acesso Permitido\n");
            }


    }while(senha!=2002);

}
