#include<stdio.h>

main()
{
    int HI,MI,HF,MF,TH,TM ;

    scanf("%d",&HI) ;
    scanf("%d",&MI) ;
    scanf("%d",&HF) ;
    scanf("%d",&MF) ;

    if((HI>HF)&&(MI==MF)) {
        TH=24-HI+HF ;
        printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",TH);
        exit(0);
    }

    else if((HI>HF)&&(MI>MF)) {
        TH=24-HI+HF-1 ;
        TM=60-MI+MF ;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",TH,TM);
        exit(0);
    }

    else if((HI>HF)&&(MI<MF)) {
        TH=24-HI+HF ;
        TM=MF-MI ;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",TH,TM);
        exit(0);
    }

    else if((HI<HF)&&(MI==MF)) {
        TH=HF-HI ;
        printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",TH);
        exit(0);
    }

    else if((HI<HF)&&(MI>MF)) {
        TH=HF-HI-1 ;
        TM=60-MI+MF ;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",TH,TM);
        exit(0);
    }

    else if((HI<HF)&&(MI<MF)) {
        TH=HF-HI ;
        TM=MF-MI ;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",TH,TM);
        exit(0);
    }

    else {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n") ;
    }
}
