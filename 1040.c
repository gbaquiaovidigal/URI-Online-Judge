#include<stdio.h>

main()
{
    double n1,n2,n3,n4,M,nE,MF;

    scanf("%lf" "%lf" "%lf" "%lf",&n1,&n2,&n3,&n4);

    M=((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;

    if(M>=7.0) {
        printf("Media: %.1lf\n",M);
        printf("Aluno aprovado.\n"); }

    else if((M>=5.0)&&(M<7)) {
        printf("Media: %.1lf\n",M);
        printf("Aluno em exame.\n");
        scanf("%lf",&nE);
        printf("Nota do exame: %.1lf\n",nE);


        MF=(nE+M)/2;

        if(MF>=5) {

        printf("Aluno aprovado.\n");
        printf("Media final: %.1lf\n",MF)  ; }

        else if(MF<5) {
        printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",MF)  ;  } }

    else {
        printf("Media: %.1lf\n",M);
        printf("Aluno reprovado.\n"); }
}
