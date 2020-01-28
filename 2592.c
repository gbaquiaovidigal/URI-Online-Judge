#include<stdio.h>

main(){

    int i=0,N,num,cont,tentativas,flag;

    while((scanf("%d",&N)!=0) && (N!=0)){
        tentativas=0;
        flag = 0;
        for(i=1;i<=N;i++){
            scanf("%d",&num);
            if(num == i)
                cont++;
        }
        if(cont != N)
                tentativas++;
        else
                printf("%d\n",tentativas+1);
    }
}
