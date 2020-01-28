#include<stdio.h>

int FIGURINHAS(int X1,int X2){

    if (X1 % X2 == 0)
        return (X2);

    else{
        return (FIGURINHAS(X2,X1%X2));
    }
}

main(){
    int N,F1,F2,maior,menor,i;

    scanf("%d",&N);

    for(i=0;i<N;i++){
        scanf("%d",&F1);
        scanf("%d",&F2);

        if(F1>F2){
            maior = F1;
            menor = F2;
        }

        else{
            maior = F2;
            menor = F1;
        }

        FIGURINHAS(maior,menor);
        printf("%d\n",FIGURINHAS(maior,menor));
    }
}
