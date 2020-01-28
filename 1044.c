#include<stdio.h>

main() {

    int A,B ;

    scanf("%d",&A) ;
    scanf("%d",&B) ;

    if(B%A==0) {
        printf("Sao Multiplos\n") ;
        exit(0);
    }


    else if(A%B==0) {
        printf("Sao Multiplos\n") ;
        exit(0);
    }

    else
        printf("Nao sao Multiplos\n") ;

}
