#include<stdio.h>
#include<math.h>

main(){

    int C,N;
    double A,i,h,At,base;
    double tg = 0.72654252800536088589546675748062;
    scanf("%d",&C);
    for(i=0;i<C;i++){
        scanf("%d",&N);
        base = N/2.0;
        h = base/tg;
        A = (N*h)/2.0;
        At = (A*5.0);

        printf("%.3lf\n",At);
    }
}
