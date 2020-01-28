#include<stdio.h>


void Detetive(int num[], int Tamanho){
    int aux,i,j;
        for(i = 0; i < Tamanho-1; i++)
            for(j = Tamanho-1; j > i; j--){
                if ( num[j]>num[j-1] ){         // decrescente
                    aux=num[j];
                    num[j]= num[j-1];
                    num[j-1]=aux;   }
            }
}


main()
{

    int N,cont,i,V[100000],V2[100000];

    scanf("%d",&N);

    while(N!=0){
    cont = 0;
        for(i=0;i<N;i++){

            scanf("%d",&V[i]);
            V2[i] = V[i];
        }

        Detetive(V,N);

        for(i=0;i<N;i++){
            if(V[1] == V2[i])
              cont = i;
        }

        printf("%d\n",cont+1);

        scanf("%d",&N);
    }
}

