#include<stdio.h>

main(){

    int cont=0,N,X,T0=0,T1=0;



    while(1){
        scanf("%d",&N);

       if(N==0){
        break;
       }

       for(cont=0;cont<N;cont++){
           scanf("%d",&X);



           if(X==0){
            T0=T0+1;
           }

           else if(X==1){
            T1=T1+1;
           }

       }
       printf("Mary won %d times and John won %d times\n",T0,T1);

       cont++;
       T0=0;
       T1=0;
    }

}
