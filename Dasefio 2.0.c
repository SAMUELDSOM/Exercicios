#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int q_dias, pag, v_diaria, parcelas;
    float total, v_parcel;

 printf ("\n--------------------------------------------------------------------------------\n");
    printf("Quantidade de dias:\n");
    scanf("%d", &q_dias);
     printf ("\n--------------------------------------------------------------------------------\n");
    printf("Forma de pagamento:\n1-Avista\n2-Parcelado\n");
    scanf("%d", &pag);
     printf ("\n--------------------------------------------------------------------------------\n");

    if (pag == 2){
        
        printf("Quantidade de parcelas:\n");
        scanf("%d", &parcelas);
        printf ("\n--------------------------------------------------------------------------------\n");
        v_diaria = 300;
    }
    else{
        v_diaria = 260;
        parcelas = 0;
    }
        if (q_dias <= 15){
            total = (v_diaria + 7.50) * q_dias;
            v_parcel = total/parcelas;
        }
        else{
            total = (v_diaria + 5.50) * q_dias;
            v_parcel = total/parcelas;
        }
    if (pag == 2){
        
        printf("O total a pagar é de: %.2f\n", total);
        printf("O valor de cada parcela é de: %.2f", v_parcel);
        printf ("\n--------------------------------------------------------------------------------\n");
    }
    else{
        
        printf("O total a pagar é de: %.2f\n", total);
        printf ("\n--------------------------------------------------------------------------------\n");
    }
    
    return 0;
}