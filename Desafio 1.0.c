#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>


 int main()
 {

    char nome[60];
    char*nome_modelo=NULL;
    int pag,prestacao,mod;
    float valor, valorf, desc, juros, valorParcela;

        printf("Digite seu nome:\n");
        gets(nome);
        printf ("\n--------------------------------------------------------------------------------\n");
        printf("Digite o modelo do carro:\n1-Corolla\n2-Focus\n3-HB20\n4-Civic\n5-Gol\n6-Jetta\n");
        scanf("%d", &mod);
        printf ("\n--------------------------------------------------------------------------------\n");

        switch (mod)
        {
        case 1:
            nome_modelo = "Corolla";
            valor = 80000;
            printf("O carro escolido foi um %s, no valor de %.2f.", nome_modelo, valor);
            printf ("\n--------------------------------------------------------------------------------\n");
            break;
        case 2:
        
            nome_modelo = "Focus";
            valor = 60000;
            printf("O carro escolido foi um %s, no valor de %.2f.", nome_modelo , valor);
            printf ("\n--------------------------------------------------------------------------------\n");
            break;
        case 3:
        
            nome_modelo = "HB20";
            valor = 56000;
            printf("O carro escolido foi um %s, no valor de %.2f.", nome_modelo , valor);
            printf ("\n--------------------------------------------------------------------------------\n");
            break;
        case 4:
        
            nome_modelo = "Civic";
            valor = 72000;
            printf("O carro escolido foi um %s, no valor de %.2f.", nome_modelo , valor);
            printf ("\n--------------------------------------------------------------------------------\n");
            break;
        case 5:
        
            nome_modelo = "Gol";
            valor = 50000;
            printf("O carro escolido foi um %s, no valor de %.2f.", nome_modelo , valor);
            printf ("\n--------------------------------------------------------------------------------\n");
            break;
        case 6:
        
            nome_modelo = "Jetta";
            valor = 100000;
            printf("O carro escolido foi um %s, no valor de %.2f.", nome_modelo , valor);
            printf ("\n--------------------------------------------------------------------------------\n");
            break;        
        default:
        printf("!Modelo invalido!");
        printf ("\n--------------------------------------------------------------------------------\n");
        }

        printf("Digite a forma de pagamento:\n1-Cheque\n2-Cartao\n3-Dinheiro\n4-Prazo\n");
        scanf("%d", &pag);
        printf ("\n--------------------------------------------------------------------------------\n");

        switch (pag)
        {
        case 1:
            desc = valor*0.05;
            valorf = valor - desc;
            printf("Voce escolheu a opcao de pagamento com Cheque.\nVoce tera uma desconto de: %.2f\nE o valor final sera: %.2f\n", desc, valorf);
            printf ("\n--------------------------------------------------------------------------------\n");
            break;
        
       
        case 2:
            desc = valor*0.03;
            valorf = valor - desc;
            printf("Voce escolheu a opcao de pagamento com Cartao.\nVoce tera uma desconto de: %.2f\nE o valor final sera: %.2f\n", desc, valorf);
            printf ("\n--------------------------------------------------------------------------------\n");
            break;

        case 3:
            desc = valor*0.1;
            valorf = valor - desc;
            printf("Voce escolheu a opcao de pagamento com Dinheiro.\nVoce tera uma desconto de: %.2f\nE o valor final sera: %.2f\n", desc, valorf);
            printf ("\n--------------------------------------------------------------------------------\n");
            break;

        case 4:
            
            printf("Informe a quantidade de prestacoes que deseja: ");
            scanf("%d", &prestacao);
            juros = (prestacao * 0.01) * valor;
            valorf = valor + juros;
            valorParcela = valorf/prestacao;
             printf ("O valor das parcelas sera de R$%.2f\n", valorParcela);
             printf ("E o valor total da compra sera de R$%.2f\n", valorf);
            
            break;
        default:
            
            printf("!Forma de pagamento invalida!");
            
        }
            if (pag == 4)
            {
                printf("nome do clinete: %s\n", nome);
                printf("Carro comprado: %s\n", nome_modelo);
                printf("Valor do carro comprado: %.2f\n", valor);
                printf("O valor final do carro e de: %.2f\n", valorf);
                printf("valor da prestacao: %.2f\n", valorParcela);
                printf("Juro corrente: %.2f\n", juros);
                printf ("\n--------------------------------------------------------------------------------\n");
            }
            else
            {
                printf("nome do clinete: %s\n", nome);
                printf("Carro comprado: %s\n", nome_modelo);
                printf("Valor do carro comprado: %.2f\n", valor);
                printf("O valor final do carro e de: %.2f\n", valorf); 
                printf ("\n--------------------------------------------------------------------------------\n");
            }

     return 0;
}