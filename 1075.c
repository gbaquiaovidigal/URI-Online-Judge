#include<stdio.h>

main(){

    int N,cont;
    cont=0;

    scanf("%d",&N);

    while(cont<10000){
        if((cont%N)==2)

        printf("%d\n",cont);
        cont++;

    }

}
