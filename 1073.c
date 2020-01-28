#include<stdio.h>

main()
{
    int cont,N,X=0,QUAD;

    scanf("%d",&N);

        if((5<N)&&(N<2000)){

        if((N%2)==0) {

            for(cont=1;cont<=N;cont+=2){
            X=X+2;
            QUAD=X*X;
            printf("%d^2 = %d\n",X,QUAD);
            }

        }

        else{
            for(cont=1;cont<N;cont+=2){
            X=X+2;
            QUAD=X*X;
            printf("%d^2 = %d\n",X,QUAD);
            }
        }

        }

}
