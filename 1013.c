#include<stdio.h>

main()
{
    int A,B,S,MAIORAB,MAIORABC ;
    scanf ("%d",&A);
    scanf ("%d",&B);
    scanf ("%d",&S);
    MAIORAB=(A+B+abs(A-B))/2 ;
    MAIORABC=(MAIORAB+S+abs(MAIORAB-S))/2 ;
    printf("%d eh o maior\n",MAIORABC);

}
