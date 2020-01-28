#include<stdio.h>

int tabuada(int,int);

main(){
    int N,M;

    M=1;

    scanf("%d",&N);
    tabuada(N,M);
}

int tabuada(int X, int Y){

    printf("%d x %d = %d\n",Y,X,X*Y);


    if(Y==10){
        return (0);
    }

    else{
        return (tabuada(X,Y+1));
    }
}




