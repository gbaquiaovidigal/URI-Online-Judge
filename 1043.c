#include<stdio.h>

main()

{
    float x,y,z,P,A ;

    scanf("%f %f %f",&x,&y,&z) ;

    if(((x+y)>z)&&((x+z)>y)&&((y+z)>x)) {
        P=x+y+z ;
        printf("Perimetro = %.1f\n",P) ;
    }

    else {
        A=((x+y)*z)/2 ;
        printf("Area = %.1f\n",A) ;
    }
}
