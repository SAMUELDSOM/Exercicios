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
    printf("Para qual matéria deseja calcular a média:\n");
    gets(mat);
    printf ("\n--------------------------------------------------------------------------------\n");
    printf("Olá pequeno padawan, está pronto para ver sua média de %s ?\n(Digite 1 para continuar)\n", mat);
    scanf("%d", &esc);  
    printf ("\n--------------------------------------------------------------------------------\n");
    printf("Ótimo, vamos lá.\n");
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
        printf("Parabêns %s.\nVocê foi aprovado na matéria de %s.\nCom média de %.1f.", nome, mat, med);
    }
    else{
        printf ("\n--------------------------------------------------------------------------------\n");
        printf("%s, você foi reprovado na metéria de %s.\nCom mé dia de %.1f.", nome, mat, med);
    }

    return 0;
 }