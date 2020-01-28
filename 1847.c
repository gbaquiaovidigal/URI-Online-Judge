#include<stdio.h>

main()
{
    int A,B,C ;

    scanf("%d %d %d",&A,&B,&C) ;

    if((-100<=A)&&(-100<=B)&&(-100<=C)&&(A<=100)&&(B<=100)&&(C<=100)){

        if((A>B)&&(B<=C)) {
        printf(":)\n") ;
        }

        else if((A<B)&&(B>=C)) {
        printf(":(\n") ;
        }

        else if(((A<B)&&(B<C))&&(B-A)>(C-B)) {
        printf(":(\n") ;
        }

        else if(((A<B)&&(B<C))&&(B-A)<=(C-B)) {
        printf(":)\n") ;
        }

        else if(((A>B)&&(B>C))&&(C-B)>(B-A)) {
        printf(":)\n") ;
        }

        else if(((A>B)&&(B>C))&&(A-B)<=(B-C)) {
        printf(":(\n") ;
        }

        else if((A=B)&&(B<C)) {
        printf(":)\n") ;
        }

        else
        printf(":(\n") ;


    }

}
