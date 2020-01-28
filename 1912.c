#include<stdio.h>

double A;
int c = 0;

void SeuMadruga(double Vet[],double inic,double maior,double n){

   int i;
   double corte = (maior+inic)/2.0;
   double total = 0;
   c++;

    for(i=0;i<n;i++){
        if(Vet[i] > corte){
            total +=  (Vet[i]-corte);
        }
    }

    if(c == 100 || total == A){
        printf("%.4lf\n",corte);
        return;
    }

    if(total>A)
        SeuMadruga(Vet,inic,corte,n);
    else
        SeuMadruga(Vet,corte,maior,n);

}

main(){
    double N;
    int i;

    while(scanf("%lf %lf",&N,&A),N,A){

        double maior;
        double Total = 0;
        int n = N;
        double Tiras[n];

        for(i=0;i<N;i++){
            scanf("%lf",&Tiras[i]);
            Total += Tiras[i];
            if(i==0 || Tiras[i]>maior)
                maior = Tiras[i];
        }

        if(Total<A){
            printf("-.-\n");
            continue;
        }
        else if(Total == A){
            printf(":D\n");
            continue;
        }

        c = 0;
        SeuMadruga(Tiras,maior,0,N);
    }
}

