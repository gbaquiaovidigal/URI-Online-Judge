#include<stdio.h>
main(){

    int X,T=0,cont=0;

    while(cont<5){
        scanf("%d",&X);

        if((X%2)==0){
            T=T+1;
        }
        cont++;
    }
    printf("%d valores pares\n",T);
}
