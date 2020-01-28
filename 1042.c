#include<stdio.h>

main()
{
    int A,B,C,x,y,z;

    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);

    if((A<B)&&(A<C)){
        x=A ;

        if(B<C) {
        y=B ;
        z=C ;
        }

        else {
        y=C ;
        z=B ;
        }

    }

    else if((B<A)&&(B<C)) {
        x=B ;

        if(A<C) {
        y=A ;
        z=C ;
        }

        else {
        y=C ;
        z=A ;
        }
    }

    else if((C<A)&&(C<B)) {
        x=C ;

        if(A<B) {
        y=A ;
        z=B ;
        }

        else{
        y=B ;
        z=A ;
        }
    }

    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);
    printf("\n");
    printf("%d\n",A);
    printf("%d\n",B);
    printf("%d\n",C);
}
