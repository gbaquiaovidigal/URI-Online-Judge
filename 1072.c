#include<stdio.h>

main(){

    int N,X,cont,dentro=0,fora=0;
        scanf("%d",&N);

    for(cont=0;cont<N;cont++){
       scanf("%d",&X);



        if((X>=10)&&(X<=20)){
            dentro=dentro+1;
            }

         else {
            fora=fora+1;
            }
    }
        printf("%d in\n",dentro);
        printf("%d out\n",fora);
}
