#include<stdio.h>

main()
{
    int cont,N,X,PP=0,PN=0,IP=0,IN=0,NULO=0;

    scanf("%d",&N);

    for(cont=0;cont<N;cont++){
        scanf("%d",&X);

        if(((X%2)==0)&&(X>0)){
            PP=PP+1;
            printf("EVEN POSITIVE\n");
        }

        else if(((X%2)==0)&&(X<0)){
            PN=PN+1;
            printf("EVEN NEGATIVE\n");
        }

        else if(((X%2)!=0)&&(X>0)){
            IP=IP+1;
            printf("ODD POSITIVE\n");
        }

        else if(((X%2)!=0)&&(X<0)){
            IN=IN+1;
            printf("ODD NEGATIVE\n");
        }

        else{
            NULO=NULO+1;
            printf("NULL\n");
    }

}
}
