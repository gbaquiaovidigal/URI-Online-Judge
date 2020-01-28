#include<stdio.h>
#include<math.h>

typedef struct{
    int num,sinal;
}predio;

void Edificio(predio vet[ ], int esq, int dir){
    int i=esq, j=dir;
    predio x,y;
    x = vet[(esq+dir)/2];
        do{
            while ((vet[i].num < x.num) && (i < dir))
            i++;
            while ((x.num < vet[j].num) && (j > esq))
            j--;
            if ( i <= j ){
                y = vet[i];
                vet[i] = vet[j];
                vet[j] = y;
                i++;
                j--;
            }
        }while ( i <=j );

        if ( esq < j )
        Edificio(vet, esq, j);
        if ( i < dir )
        Edificio(vet, i, dir);
}

main(){

    int p,pisos,i,x,j;
    int andar;


    scanf("%d",&p);

    for(i=0;i<p;i++){

     scanf("%d",&pisos);

     predio p[pisos];

     for(j=0;j<pisos;j++){
        scanf("%d",&x);

        p[j].num = abs(x);

        if(x < 0){
            p[j].sinal = 0;
        }

        else{
            p[j].sinal = 1;
        }

     }

     Edificio(p,0,pisos-1);

    andar = 0;

     for(j=pisos;j>0;j--){
        if(p[j].sinal != p[j-1].sinal){
            andar++;
        }
     }

     printf("%d\n",andar);
    }
    }
