#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main(void)
 {
  setlocale(LC_ALL, "Portuguese");
    int esc;
    float n1, n2, med, pim;
    char nome[60];
    char mat[60];

    printf("Digite seu nome:\n");
    gets(nome);
    printf ("\n--------------------------------------------------------------------------------\n");
    printf("Para qual mat�ria deseja calcular a m�dia:\n");
    gets(mat);
    printf ("\n--------------------------------------------------------------------------------\n");
    printf("Ol� pequeno padawan, est� pronto para ver sua m�dia de %s ?\n(Digite 1 para continuar)\n", mat);
    scanf("%d", &esc);  
    printf ("\n--------------------------------------------------------------------------------\n");
    printf("�timo, vamos l�.\n");
    printf ("\n--------------------------------------------------------------------------------\n");
    printf("Digite sua nota da N1:\n");
    scanf("%f", &n1);
    printf ("\n--------------------------------------------------------------------------------\n");
    printf("Digite sua nota da N2:\n");
    scanf("%f", &n2);
    printf ("\n--------------------------------------------------------------------------------\n");
    printf("Agora sua nota do PIM:\n");
    scanf("%f", &pim);

        med =  ((n1 * 4) + (n2 * 4) + (pim * 2))/10;

    if (med >= 5){
        printf ("\n--------------------------------------------------------------------------------\n");
        printf("Parab�ns %s.\nVoc� foi aprovado na mat�ria de %s.\nCom m�dia de %.1f.", nome, mat, med);
    }
    else{
        printf ("\n--------------------------------------------------------------------------------\n");
        printf("%s, voc� foi reprovado na met�ria de %s.\nCom m� dia de %.1f.", nome, mat, med);
    }

    return 0;
 }