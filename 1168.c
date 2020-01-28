#include<stdio.h>

main(){

    int J,N,i,S;

    S=0;


    scanf("%d",&N);

    char V[N][102];

    for(i=0;i<N;i++){
        scanf("%s",&V[i]);

        S=0;

        for(J=0;J<strlen(V[i]);J++){
            if(V[i][J]=='1'){
                S=S+2;

            }

            else if (V[i][J]=='2'){
                S=S+5;

            }

            else if (V[i][J]=='3'){
                S=S+5;

            }

            else if (V[i][J]=='4'){
                S=S+4;

            }

            else if (V[i][J]=='5'){
                S=S+5;

            }

            else if (V[i][J]=='6'){
                S=S+6;

            }

            else if (V[i][J]=='7'){
                S=S+3;

            }

            else if (V[i][J]=='8'){
                S=S+7;

            }

            else if (V[i][J]=='9'){
                S=S+6;

            }

            else if (V[i][J]=='0'){
                S=S+6;

            }
        }


        printf("%d leds\n",S);

    }

}
