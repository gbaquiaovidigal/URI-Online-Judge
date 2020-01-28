#include <stdio.h>

int i,j;

void Impedimento(int num[], int Tamanho){
    int aux;
        for(i = 0; i < Tamanho-1; i++)
            for(j = Tamanho-1; j > i; j--){
                if ( num[j]<num[j-1] ){
                    aux=num[j];
                    num[j]= num[j-1];
                    num[j-1]=aux;   }
            }
}

main(){

   int  menor, Nzag, Natac, zagueiro[11], atacante[11];

    scanf("%d %d", &Natac, &Nzag);

    while((Natac != 0)&&(Nzag != 0)){

     for(i = 0; i < Natac; i++)
      {
         scanf("%d", &atacante[i]);
      }

     for(i = 0; i < Nzag; i++)
      {
         scanf("%d", &zagueiro[i]);
      }

     Impedimento(atacante,Natac);
     Impedimento(zagueiro,Nzag);

    if(atacante[0] < zagueiro[1])
      {
         printf("Y\n");
      }
      else
      {
         printf("N\n");
      }



    scanf("%d %d", &Natac, &Nzag);
   }
}
