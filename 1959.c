#include<stdio.h>

long long int poligono(long long int,long long int),R;

main(){
    int N,L;
    scanf("%lld",&N);
    scanf("%lld",&L);

    R = poligono(N,L);

    printf("%lld\n",R);
}

long long int poligono(long long int X,long long int Y){

    R = X * Y;
    return (R);

}
