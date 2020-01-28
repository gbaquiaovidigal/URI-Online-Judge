#include<string.h>
#include<string.h>

typedef struct{
    char cor[9];
    char tam ;
    char nome[51];
}uniforme;

void ON(uniforme vet[ ], int esq, int dir){
    int i=esq, j=dir;
    uniforme x,y;
    x = vet[(esq+dir)/2];
        do{
            while ((strcmp(vet[i].nome,x.nome)<0) && (i < dir))
            i++;
            while ((strcmp(x.nome,vet[j].nome)<0) && (j > esq))
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
        ON(vet, esq, j);
        if ( i < dir )
        ON(vet, i, dir);
}

void OT(uniforme vet[ ], int esq, int dir){
    int i=esq, j=dir;
    uniforme x,y;
    x = vet[(esq+dir)/2];
        do{
            while ((vet[i].tam > x.tam) && (i < dir))
            i++;
            while ((x.tam > vet[j].tam) && (j > esq))
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
        OT(vet, esq, j);
        if ( i < dir )
        OT(vet, i, dir);
}

void OC(uniforme vet[ ], int esq, int dir){
    int i=esq, j=dir;
    uniforme x,y;
    x = vet[(esq+dir)/2];
        do{
            while ((strcmp(vet[i].cor,x.cor)<0) && (i < dir))
            i++;
            while ((strcmp(x.cor,vet[j].cor)<0) && (j > esq))
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
        OC(vet, esq, j);
        if ( i < dir )
        OC(vet, i, dir);
}

main(){
    int N,i,j,k=0;
    int priCOR,priTAM,ultTAM,ultCOR;
    int flag1,flag2;

    while((scanf("%d",&N))!= 0 && (N!=0))
    getchar();
    {

        uniforme u[N];

		if (k==1){
			printf("\n");
		}
		k=1;
        for (i=0; i<N; i++){
            scanf("%51[^\n]",u[i].nome);
            getchar();
            scanf("%s",u[i].cor);
            getchar();
            scanf(" %c",&u[i].tam);
            getchar();

        }

        OC(u,0,N-1);

        for(i=0;i<N;i++){
        priCOR = i;          // primeira posição (COR)
        flag1 = 0;

        while(u[i].cor == u[i+1].cor){
            i++;
            ultCOR=i;       // ultima posição (COR)
            flag1 = 1;
        }
        if(flag1 == 1){
            OT(u,priCOR,ultCOR);

            for(j=priCOR;j<ultCOR;j++){
                priTAM = j;
                flag2 = 0;

                while(u[j].tam == u[j+1].tam){
                    j++;
                    ultTAM=j;
                    flag2 = 1;
                }
                if(flag2 == 1){
                    ON(u,priTAM,ultTAM);
                    }
                }
            }
      }

        for(i=0; i<N; i++)
            printf("%s %c %s\n", u[i].cor, u[i].tam, u[i].nome);

        scanf("%d",&N);
        getchar();
    }
}
