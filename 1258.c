#include<stdio.h>
#include<string.h>

typedef struct{
char nome[50];
char cor[20];
char tam;
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

main () {

    int t,i,k=0;

	scanf("%d",&t);
	getchar();

    while(t!=0){


	    uniforme u[t];

		if (k==1){
			putchar('\n');
		}

		k=1;

	    for(i=0;i<t;i++){
	     scanf("%50[^\n]",u[i].nome);
	     getchar();
	     scanf("%s %c",u[i].cor,&u[i].tam);
		 getchar();
	    }

	     int COR=t;

	     OC(u,0,t-1);
	     for(i=0;i<t;i++){
	            if(i>0){
	            	if(strcmp((u[i].cor),(u[i-1].cor))!=0){
	                COR=i;
	                break;
	            	}
				}
		 }

	     OT(u,0,COR-1);
	     OT(u,COR,t-1);

	     int n1=t-1;
		 int n2=t-1;
		 int n3=t-1;
		 int n4=t-1;
		 int n5=t-1;
		 int n6=t-1;

		 n1=n2=n3=n4=n5=n6=0;
	     n1=n2=n3 = COR;
	     n4=n5=n6 = t;

	     for(i=0;i<COR;i++){
	            if(i>0){
	            	if(u[i].tam != u[i-1].tam){
	                	n1=i;
	                	break;
					}
				}
		}

	     for(i=n1;i<COR;i++){
	           if(i>n1){
	           		if(u[i].tam != u[i-1].tam){
	                	n2=i;
	                	break;
					}
			   }
		}

	     for(i=n2;i<COR;i++){
	            if(i>n2){
	            	if(u[i].tam != u[i-1].tam){
	                	n3=i;
	                	break;
					}
				}
		 }

	     for(i=n3;i<t;i++){
	            if(i>n3){
	            	if(u[i].tam!=u[i-1].tam){
	                	n4=i;
	                	break;
					}
				}
		 }

	     for(i=n4;i<t;i++){
	            if(i>n4){
	            	if(u[i].tam != u[i-1].tam){
	                	n5=i;
	                	break;
					}
				}
		 }

	     for(i=n5;i<t;i++){
	            if(i>n5){
	            	if(u[i].tam != u[i-1].tam){
	                	n6=i;
	                	break;
					}
				}
		 }

	    if(n1==t-1){
	        ON(u,0,COR-1);
	        ON(u,COR,t-1);}

		else{
			i=0;
	   		ON(u,0,n1-1);
		    ON(u,n1,n2-1);
		    ON(u,n2,n3-1);
		    ON(u,n3,n4-1);
		    ON(u,n4,n5-1);
		    ON(u,n5,n6-1);
		}

	     for(i=0;i<t;i++){
	        printf("%s %c %s\n",u[i].cor,u[i].tam,u[i].nome);
	     }

    	scanf("%d",&t);
    	getchar();
	}
}
