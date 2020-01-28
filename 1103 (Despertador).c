#include<stdio.h>
main () {

    int H1,M1,H2,M2,cont,T1,T2,R,FIM;
    cont=0;

    do{
            scanf("%d %d %d %d",&H1,&M1,&H2,&M2);



          if(H1>H2){

            T1=(H1*60)+M1;
            T2=(H2*60)+M2;
            R=(1440+T2)-T1;
         }
          else if(H1<H2){

            T1=(H1*60)+M1;
            T2=(H2*60)+M2;
            R=T2-T1;}


          if((H1==H2)&&(M1>M2)){

            R=(1440)-(M1-M2);
          }

          else if((H1==H2)&&(M1<M2)){

            R=(M2-M1);
          }


          if((H1==0)&&(H1!=H2)&&(H2!=0)){
            T1=(24*60)+M1;
            T2=(H2*60)+M2;
            R=(1440+T2)-T1;}

          else if ((H2==0)&&(H1!=H2)&&(H1!=0)){

           T1=(H1*60)+M1;
           T2=(24*60)+M2;
           R=T2-T1;}

            FIM=H1+H2+M1+M2;
            if(FIM!=0){

            printf("%d\n",R);}



           cont++;

    }while(FIM!=0);


}
