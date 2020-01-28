#include<stdio.h>

int Fatorial(int);

main(){
    int N,R;
    scanf("%d",&N);

    R = Fatorial(N);

    printf("%d\n",R);
}

int Fatorial(int X){
    if(X==0)
        return 1;

    else
        return (X*Fatorial(X-1));


}
