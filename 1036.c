#include<stdio.h>
#include<math.h>

main()
{
    double A,B,C,R1,R2,D;


    scanf("%lf""%lf""%lf",&A,&B,&C);

    D=(B*B)-4.0*(A*C);

    if((A==0.0)||(D<0)) {
        printf("Impossivel calcular\n");
        exit(0);        }

    else {
        R1=((-B + sqrt((B*B)-4.0*(A*C)))/(2.0*A));
        R2=((-B - sqrt((B*B)-4.0*(A*C)))/(2.0*A));

        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2); }


}
