#include<stdio.h>
#include<math.h>

main(){

    int T,N,i,mod;

    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&N);
        mod = N%4;
        if(mod == 1)
            printf("7\n");
        else if(mod == 2)
            printf("9\n");
        else if(mod == 3)
            printf("3\n");
        else if(mod == 0)
            printf("1\n");
    }
}
