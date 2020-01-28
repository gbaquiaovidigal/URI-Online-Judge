#include<stdio.h>

main(){

    int Filhos,Filhas,Total=0,cont=0;



        while(cont<5){
                scanf("%d",&Filhos);
                scanf("%d",&Filhas);

                Total=Filhos+Filhas;


    if((Filhos==0)&&(Filhas==0)){
        break;
    }
    printf("%d\n",Total);
}
}
