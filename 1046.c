#include<stdio.h>

main()
{

    int A,B,T;

    scanf("%d",&A) ;
    scanf("%d",&B) ;

    if(A>B) {
        T=24-A+B ;
        printf("O JOGO DUROU %d HORA(S)\n",T) ;
        exit(0);
        }

    else if(A<B) {
        T=B-A ;
        printf("O JOGO DUROU %d HORA(S)\n",T) ;
        exit(0);
        }

    else
        printf("O JOGO DUROU 24 HORA(S)\n") ;


}
