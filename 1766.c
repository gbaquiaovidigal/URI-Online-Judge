#include<stdio.h>
#include<string.h>

typedef struct{
    int peso;
    int idade;
    float altura;
    char nome[101];
}Elfo;


void OP(Elfo vet[], int esq, int dir){
    int i=esq, j=dir;
    Elfo x,y;
    x = vet[(esq+dir)/2];
        do{
            while ((vet[i].peso > x.peso) && (i < dir))
            i++;
            while ((x.peso > vet[j].peso) && (j > esq))
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
        OP(vet, esq, j);
        if ( i < dir )
        OP(vet, i, dir);
}

void OI(Elfo vet[], int esq, int dir){
    int i=esq, j=dir;
    Elfo x,y;
    x = vet[(esq+dir)/2];
        do{
            while ((vet[i].idade < x.idade) && (i < dir))
            i++;
            while ((x.idade < vet[j].idade) && (j > esq))
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
        OI(vet, esq, j);
        if ( i < dir )
        OI(vet, i, dir);
}

void OA(Elfo vet[], int esq, int dir){
    int i=esq, j=dir;
    Elfo x,y;
    x = vet[(esq+dir)/2];
        do{
            while ((vet[i].altura < x.altura) && (i < dir))
            i++;
            while ((x.altura < vet[j].altura) && (j > esq))
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
        OA(vet, esq, j);
        if ( i < dir )
        OA(vet, i, dir);
}

void ON(Elfo vet[ ], int esq, int dir){
    int i=esq, j=dir;
    Elfo x,y;
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

int main(){
    int testes,n,m,cont,i,j,k;
    int flag1,flag2,flag3,Y,X,Z;
    int pesoigual=0,idadeigual=0,alturaigual=0;

    scanf("%d",&testes);
    getchar();


    for (cont=0;cont<testes;cont++){
        scanf("%d %d",&n,&m);
        getchar();

        Elfo renas[n];
        memset(renas,0,sizeof(renas));

        for(i=0;i<n;i++){
            scanf("%s %d %d %f",renas[i].nome,&renas[i].peso,&renas[i].idade,&renas[i].altura);
            getchar();
        }

      OP(renas,0,n-1);

      for(i=0;i<n;i++){
        X = i;
        flag1 = 0;

        while(renas[i].peso == renas[i+1].peso){
            i++;
            pesoigual=i;
            flag1 = 1;
        }
        if(flag1 == 1){
            OI(renas,X,pesoigual);

            for(j=X;j<pesoigual;j++){
                Y = j;
                flag2 = 0;

                while(renas[j].idade == renas[j+1].idade){
                    j++;
                    idadeigual=j;
                    flag2 = 1;
                }
                if(flag2 == 1){
                    OA(renas,Y,idadeigual);

                    for(k=Y;k<idadeigual;k++){
                        Z = k;
                        flag3 = 0;

                        while(renas[k].altura == renas[k+1].altura){
                            k++;
                            alturaigual=k;
                            flag3 = 1;
                        }
                        if(flag3 == 1){
                            ON(renas,Z,alturaigual);

                        }
                    }
                }
            }
        }
      }

        printf("CENARIO {%d}\n",cont+1);

        for(i=0;i<m;i++){
            printf("%d - %s\n",i+1,renas[i].nome);
        }
    }

    return 0;
}
