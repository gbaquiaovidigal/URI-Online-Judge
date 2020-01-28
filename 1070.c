#include<stdio.h>

main()
{
    int X,contador;

    scanf("%d",&X);


    for(contador=0;contador<6;contador++){



            if((X%2)==1){
                X=(X+2);
                printf("%d\n",X);
            }

            else{
                X=(X+2)+(-1);
                printf("%d\n",X);
            }

    }


}
