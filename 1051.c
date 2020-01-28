#include<stdio.h>

main()

{
    float S,Y,Y2,IR;

    scanf("%f",&S) ;

    if((S>2000)&&(S<=3000)) {
        Y=S-2000 ;
        Y2=(Y*8)/100 ;
        IR=Y2 ;
        printf("R$ %.2f\n",IR);

    }

    else if((S>3000)&&(S<=4500)) {
        Y=S-3000;
        Y2=(Y*18)/100 ;
        IR=Y2+80 ;
        printf("R$ %.2f\n",IR) ;

    }

    else if(S>4500) {
        Y=S-4500 ;
        Y2=(Y*28)/100 ;
        IR=Y2+80+270 ;
        printf("R$ %.2f\n",IR) ;

    }

    else {
       printf("Isento\n");
    }

}
