#include<stdio.h>
main() {

    int T,i,m,j,a=0,M[15][15];
    char C[60];


   while(scanf("%d",&T)&&(T!=0)){





      for(i=0;i<T;i++){
      for(j=0;j<T;j++){
          M[i][j]=pow(2,i+j);
          if(m<M[i][j])
            m=M[i][j];


      }
      }

    sprintf(C,"%d",m);
    m=strlen(C);



    for(i=0;i<T;i++){
      for(j=0;j<T;j++){
            if (j==T-1) printf ("%*d\n",m,M[i][j]);
            else printf ("%*d ",m,M[i][j]);
      }
      }
      m=0;
       printf("\n");
    }
}
