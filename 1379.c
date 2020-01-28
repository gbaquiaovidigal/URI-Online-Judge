#include<stdio.h>

main()
{

    int cont,A,B,T1=0,T2=0;

    while(1){
        scanf("%d",&A);
        scanf("%d",&B);


    if((A==0)&&(B==0)){
        break;
    }

      T1=B-A;
      T2=A-T1;

    printf("%d\n",T2);
    cont++;
    }
}
