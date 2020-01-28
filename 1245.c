#include<stdio.h>

int i,j,aux;

void Tamanho(int num[], int X){

        for(i = 0; i < X-1; i++)
            for(j = X-1; j > i; j--){
                if ( num[j]<num[j-1] ){
                    aux=num[j];
                    num[j]= num[j-1];
                    num[j-1]=aux;   }
            }
}

main(){

    int pares,e,d;
    int N,numero;
    int esquerdo[10000],direito[10000];

	while (scanf ("%d",&N)!= EOF) {
          pares = 0;
          d=0;
          e=0;

		  int numero;
          char pe;

            for(i=0; i<N; i++){


              scanf ("%d", &numero );
              getchar();
			  scanf (" %c", &pe);
              getchar();

              if(pe == 'E'){
                esquerdo[e] = numero;
                e++;
              }

              else if(pe == 'D'){
                direito[d] = numero;
                d++;
              }
            }

          Tamanho(esquerdo,e);
          Tamanho(direito,d);


        int e2=0,d2=0;


        while((e2<e)&&(d2<d)){

            if(esquerdo[e2]==direito[d2]){
                e2++;
                d2++;
                pares++;
            }

            else if(esquerdo[e2]<direito[d2]){
                e2++;
            }

            else if(esquerdo[e2]>direito[d2]){
                d2++;
            }

        }

         printf ("%d\n",pares);
	}
}
