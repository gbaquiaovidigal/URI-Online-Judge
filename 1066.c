#include<stdio.h>

main()
{
    int valor,cont,Par=0,Impar=0,Positivo=0,Negativo=0;

    for(cont=0;cont<5;cont++){
        scanf("%d",&valor);

        if((valor%2)==0){
            Par=(Par+1);
        }

        else if((valor%2)!=0){
            Impar=(Impar+1);
        }

        if(valor>0){
            Positivo=(Positivo+1);
        }

        else if(valor<0){
            Negativo=(Negativo+1);
        }
    }

        printf("%d valor(es) par(es)\n",Par);
        printf("%d valor(es) impar(es)\n",Impar);
        printf("%d valor(es) positivo(s)\n",Positivo);
        printf("%d valor(es) negativo(s)\n",Negativo);
}
