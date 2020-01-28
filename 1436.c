#include<stdio.h>
#include<stdlib.h>
#define MAX 12

main(){
    int testes,cont,i,x,j,*vet,a=0;

    scanf("%d",&testes);
    for(cont=0;cont<testes;cont++){

        vet = (int *)calloc(MAX,sizeof(int));

        scanf("%d",&x);
        a++;

        for(i=0;i<x;i++){
            scanf("%d",&vet[i]);
        }
            printf("Case %d: %d\n",a,vet[i/2]);

    free(vet);
    }

}
