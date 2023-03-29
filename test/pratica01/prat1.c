#include <stdio.h>

// Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.

int main() {
/* entrada */
  float nota_a1 = 0.0f;
  float nota_a2 = 0.0f;
  printf("Entre com o valor entre 0 e 10 para a nota A1: ");
  scanf("%f", &nota_a1);
  printf("Entre com o valor entre 0 e 10 para a nota A2: ");
  scanf("%f", &nota_a2);
  /* processamento */
  float media_final = (0.4f * nota_a1) + (0.6f * nota_a2);
  /* saida */
  printf("A media final é %.f\n", media_final);

return 0;
}