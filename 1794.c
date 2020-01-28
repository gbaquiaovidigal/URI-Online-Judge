#include<stdio.h>

main()
{

    int N,LA,LB,SA,SB;

    scanf("%d",&N);
    scanf("%d %d",&LA,&LB);
    scanf("%d %d",&SA,&SB);

    if((1<=N)&&(N<=100)){

        if((LA<=N)&&(LB>=N)&&(SA<=N)&&(SB>=N))
            printf("possivel\n");

        else
            printf("impossivel\n") ;
    }



}
