#include<stdio.h>

main()
{
    double SA,SN,Reaj ;

    scanf("%lf",&SA) ;

    if((SA>=0)&&(SA<=400.00)) {
        Reaj=((SA*15)/100) ;
        SN=Reaj+SA ;
        printf("Novo salario: %.2lf\n",SN) ;
        printf("Reajuste ganho: %.2lf\n",Reaj) ;
        printf("Em percentual: 15 %%\n") ;
        exit(0);
    }

    else if((SA>=400.01)&&(SA<=800.00)) {
        Reaj=((SA*12)/100) ;
        SN=Reaj+SA ;
        printf("Novo salario: %.2lf\n",SN) ;
        printf("Reajuste ganho: %.2lf\n",Reaj) ;
        printf("Em percentual: 12 %%\n") ;
        exit(0);
    }

    else if((SA>=800.01)&&(SA<=1200.00)){
        Reaj=((SA*10)/100) ;
        SN=Reaj+SA ;
        printf("Novo salario: %.2lf\n",SN) ;
        printf("Reajuste ganho: %.2lf\n",Reaj) ;
        printf("Em percentual: 10 %%\n") ;
        exit(0);
    }

    else if((SA>=1200.01)&&(SA<=2000.00)) {
        Reaj=((SA*7)/100) ;
        SN=Reaj+SA ;
        printf("Novo salario: %.2lf\n",SN) ;
        printf("Reajuste ganho: %.2lf\n",Reaj) ;
        printf("Em percentual: 7 %%\n") ;
        exit(0);
    }

    else {
        Reaj=((SA*4)/100) ;
        SN=Reaj+SA ;
        printf("Novo salario: %.2lf\n",SN) ;
        printf("Reajuste ganho: %.2lf\n",Reaj) ;
        printf("Em percentual: 4 %%\n") ;
        exit(0);
    }


}
