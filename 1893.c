#include<stdio.h>

main()
{
    int A,B;

    scanf("%d %d",&A,&B);

    if((B>=0)&&(B<=2))
        printf("nova\n");

    else if((B>A)&&(B>=3)&&(B<=96))
        printf("crescente\n");


    else if((B<A)&&(B>=3)&&(B<=96))
        printf("minguante\n");

    else if((B>=97)&&(B<=100))
        printf("cheia\n");


}
