#include<stdio.h>

main()
{

    int TipoDeCha,Resp,X[5],i,RespCorreta=0;

    scanf("%d",&TipoDeCha);

    for(i=0;i<=4;i++){
        scanf("%d",&Resp);

        if(TipoDeCha == Resp){
            RespCorreta++;
        }

    }

    printf("%d\n",RespCorreta);

}
