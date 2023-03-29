#include <stdio.h>

// Variaveis serve para guarda valores
// pode ser criadas variaves dentro do bloco {} (local) ou fora (global)
// sempre trabalhar com variavel local (ponhe a variavel e tira. ponhe e tira)
// variavel global (ponhe e fica, ocupando mais espaço na memoria)

/* 
  Forma de declarar: <tipo> <nome_da_variavel>;
 */

int main()
{
    // convenção ANSI C
    int variavel1, _variavel; // Um nome só
    double valor_produto; // Nome composto
    int soma = 100;
    char *msg = "Olá Pessoal!";

    // não é convenção ANSI C
    double valorProduto; // Padrão Camel-Case usando em C++
    int DiaDaSemana;

    // má pratica de programção
    int a, b, c, x1, x2, x3;
    float VALOR;

    // nomes inválidos de variáveis
    //int 1var, @var; // nao se pode ter 1 numeros inteiros e caracteres com int pois 

    printf("valo_produto = %f\n", valor_produto);
    printf("soma = %d\n", soma);
    printf("msg = %s\n", msg);

    return 0;
}