#include<stdio.h>

main(){

    int i,N,valor,pos;

    scanf("%d",&N);

    int x[N];

    for(i=0;i<N;i++){

    scanf("%d",&x[i]);

       if(x[i] < valor){
        valor = x[i];
        pos=i;
        }

    }

    printf("Menor valor: %d\n",valor);
    printf("Posicao: %d\n",pos);

}
