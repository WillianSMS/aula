#include <stdio.h>

int main(){
    /*
      atribuição simples(=)
      atribuição com soma (+=)
      atribuição com subtração(-=)
      atribuição com multiplicação(*=)
      atribuição com divisão(/=)
      */

      int numero1, numero2, resultado;
      
      printf("Entre com numero1: \n");
      
      printf("Entre com numero2: \n");
      resultado = 10;
      printf("Resultado = %d\n", resultado);

      // resultado = resultado + 20;
      resultado += 20;
      printf("Resultado: %d\n", resultado);

      // resultado = resultado - numero1;
      resultado -= numero1;
      printf("Resultado: %d\n", resultado);

      //resultado = resultado * 5;
      resultado *= 5;
      printf("resultado: %d\n", resultado);

      //resultado = resultado / 2;
      resultado /= 2;
      printf("Resultado: %d\n", resultado);

      return 0;

}
