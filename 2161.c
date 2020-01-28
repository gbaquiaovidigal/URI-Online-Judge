#include<stdio.h>

double raiz(int Y){

    if ( Y == 0) {
        return (0);
    }

    else {
        return(1/(6 + raiz(Y-1)));
    }
}

main(){
    int X;
    double R;

    scanf("%d",&X);

    R = raiz(X);

    printf("%.10lf\n",R+3);

}

