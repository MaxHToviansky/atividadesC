#include <stdio.h>
#include <math.h>
#include <string.h>

int testes(int gastokwh,int dia,int mes,int ano)
{
    if(gastokwh<0)
    {
        printf("Gasto impossivel. \n");
        return 1;
    }

    if(dia < 1 || dia > 31)
    {
        printf("Dia Impossivel. \n");
        return 1;
    }
    
    if (mes>12 || mes<1)
    {
        printf("Mes impossivel. \n");
        return 1;
    }
    
    if (ano>2100 || ano<1929)
    {
        printf("Ano invalido. \n");
        return 1;
    }
    return 0;
}

int main() 
{
    float valorkwh = 0.45, gastokwh, conta;
    int dia, mes, ano;
    char bandeira[30];
    
    printf("Informe a bandeira. \n VERDE \n AMARELA \n VERMELHA1 \n VERMELHA2 \n");
    scanf("%s", bandeira);
    
    printf("Informe o a quantidade gasta. \n");
    scanf("%f", &gastokwh);

    printf("Informe, respectivamente, o dia, mes e ano. \n");
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);

    if(testes(gastokwh, dia, mes, ano) == 1){
        return 0;
    }

    if (dia > 29)
    {
        dia = 29;
    }

    if(!strcmp(bandeira, "VERDE"))
    {
    
        conta = valorkwh * gastokwh;
        
    } else if (!strcmp(bandeira, "AMARELA")) 
    {
        conta = (valorkwh * gastokwh) + ((float)1.5*(floor(gastokwh/100)));
    } else if (!strcmp(bandeira, "VERMELHA1")) 
    {
        conta = (valorkwh * gastokwh) + ((float)3.0*(floor(gastokwh/100)));
    } else if (!strcmp(bandeira, "VERMELHA2")) 
    {
        conta = (valorkwh * gastokwh) + ((float)4.5*(floor(gastokwh/100)));
    } else 
    {
        printf("Bandeira Invalida. \n");
        return 0;
    }

    if(mes == 12)
    {
        ano = ano + 1;
        mes = 1;
    } else if ((mes == 1) && (dia == 29))
    {
        dia = 28;
        mes = mes + 1;
    } else {
        mes = mes + 1;
    }

    

    printf("\n ----------------------- OUTPUT ----------------------- \n");
    printf("RS %f \n", conta);
    printf("Bandeira: %s \n", bandeira);
    printf("Data: %d/%d/%d \n", dia,mes,ano);
    
}