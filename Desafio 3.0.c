#include <stdio.h>
#include <math.h>
#include <locale.h>

//Compiler version gcc  6.3.0

int main()
{
  setlocale(LC_ALL,"Portuguese");
  
  float desc, desc2, q_comb, v_total;
  char t_comb;
  
  printf("Digite a quantidade de combustível:\n");
  scanf("%f", &q_comb);
  printf ("\n--------------------------------------------------------------------------------\n");
    if(q_comb <= 20){
       desc = 0.97; 
    }
    else{
      desc = 0.95;
    }
     if(q_comb <= 15){
       desc2 = 0.96; 
      }
      else{
       desc2 = 0.94;
      }
      printf("Digite o tipo de combustível(A ou G)\n");
      scanf("%s" ,&t_comb);
      printf ("\n--------------------------------------------------------------------------------\n");
     if(t_comb == 'A'){
       v_total = (4.50 * q_comb) * desc;
     }
     else{
       v_total = (5.90 * q_comb) * desc2;
     }  
     printf("O valor total é de %.2f", v_total);

    return 0;
}