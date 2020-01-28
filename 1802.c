#include<stdio.h>

void QuickSort(int vet[ ], int esq, int dir){       /// decrescente
    int i=esq, j=dir;
    int x,y;
    x = vet[(esq+dir)/2];
        do{
            while ((vet[i] > x) && (i < dir))
            i++;
            while ((x > vet[j]) && (j > esq))
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
        QuickSort(vet, esq, j);
        if ( i < dir )
        QuickSort(vet, i, dir);
}

main(){

    int V[100000];
    int Total=0,i,j,k,l,m,n=0,t;
    int Port[11],Mat[11],Fis[11],Quim[11],Bio[11];
    int P,M,F,Q,B;

    scanf("%d",&P);
    for(i=0;i<P;i++){
        scanf("%d",&Port[i]);
    }
    scanf("%d",&M);
    for(i=0;i<M;i++){
        scanf("%d",&Mat[i]);
    }
    scanf("%d",&F);
    for(i=0;i<F;i++){
        scanf("%d",&Fis[i]);
    }
    scanf("%d",&Q);
    for(i=0;i<Q;i++){
        scanf("%d",&Quim[i]);
    }
    scanf("%d",&B);
    for(i=0;i<B;i++){
        scanf("%d",&Bio[i]);
    }

    for(i=0;i<P;i++)
		for(j=0;j<M;j++)
			for(k=0;k<F;k++)
				for(l=0;l<Q;l++)
					for(m=0;m<B;m++){
						V[n]= Port[i]+Mat[j]+Fis[k]+Quim[l]+Bio[m]; ;
                        n++;}

    QuickSort(V,0,n-1);

    scanf("%d",&t);

    for(i=0;i<t;i++){

    Total += V[i];

    }
    printf("%d\n",Total);


}

