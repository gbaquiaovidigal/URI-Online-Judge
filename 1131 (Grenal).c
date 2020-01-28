#include<stdio.h>

main()
{

int NovoGrenal,GolG,GolI,VI,VG,E,GV,IV,NHV,cont;

VI=0;
VG=0;
E=0;
IV=0;
GV=0;
NHV=0;
cont=0;

do{
scanf("%d %d",&GolI,&GolG);

    if(GolI>GolG){
        VI=VI+1;
    }

    else if(GolG>GolI){
        VG=VG+1;
    }

    else if(GolG==GolI){
        E=E+1;
    }

    if(VI>VG){
        IV=IV+1;
    }

    else if(VG>VI){
        GV=GV+1;
    }

    else if(VG==VI){
        NHV=NHV+1;
    }

    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d",&NovoGrenal);
    cont++;
    }while(NovoGrenal==1);

   printf("%d grenais\n",cont);
   printf("Inter:%d\n",VI);
   printf("Gremio:%d\n",VG);
   printf("Empates:%d\n",E);

   if(IV>GV){
        printf("Inter venceu mais\n");
   }

   else if(GV>IV){
        printf("Gremio venceu mais\n");
   }

   else{
        printf("Nao houve vencedor\n");
   }


}
