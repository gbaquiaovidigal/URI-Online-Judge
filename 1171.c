#include<stdlib.h>
#include<stdio.h>
#define MAX 2001

main(){

    int N,cont,i,j,*vet,x;
    vet = (int *)calloc(MAX,sizeof(int));       /// atribui 0 as posiçoes

    scanf("%d",&N);

    for(i=0;i<N;i++){
        scanf("%d",&x);
        vet[x]++;
    }

    for(i=1;i<MAX;i++){
        if(vet[i]>0)
            printf("%d aparece %d vez(es)\n",i,vet[i]);
    }
    free(vet);
}
