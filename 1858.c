#include<stdio.h>

main(){

    int cont,N,T,Resp,Menor=21;

    scanf("%d",&N);

       for(cont=1;cont<=N;cont++){
        scanf("%d",&T);

        if(T<Menor){
            Menor=T;
            Resp=cont;
        }


       }
     printf("%d\n",Resp);
}
