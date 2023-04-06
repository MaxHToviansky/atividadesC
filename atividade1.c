#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    int caso;
    double A,B,C;
    printf(" (1) circulo \n (2) quadrado \n (3) retangulo \n Digite o tipo : \n"); 
    
    scanf("%d", &caso);

    switch (caso)
    {
    case 1:
        printf("Informe o raio. \n");
        scanf("%lf", &A);
        C = M_PI * (A*A);
        printf("Circulo \n \n Area = %f \n", C);
        break;
    case 2:
        printf("Informe o lado. \n");
        scanf("%lf", &A);
        C = A*A;
        printf("Quadrado \n \n Area = %f \n", C);
        break;
    case 3:
        printf("Informe os lados: \n");
        scanf("%lf", &A);
        scanf("%lf", &B);
        C = A*B;
        printf("Retangulo \n \n Area = %f \n", C);
        break;
    default:
        printf("Valor invalido. \n");
        break;
    }
    system("pause");
    return 0;
}