#include <stdio.h>

int digitos(int n)
{
   //definir dados
   int soma=0;

   while(n != 0)
   {
      soma = soma + n % 10;
      n = n/10;
   }
   //retornar sona
   return (soma);
} //end digitos( )


int main( ){

   //definir dados
   int n;
   int quantidade = 5;
   int i;
   int soma=0;
   //repeticao para valores no teclado
   for(i = 0; i < quantidade; i++)
   {
      //ler valor no teclado
      scanf("%d", &n);
      //se n, for negativo
      if(n <= 0)
      {
         printf("ERRO: Não serão aceitos valores negativos.\n");
      }
      else //se o valor nao for negativo
      {
         //chamar a funcao
         soma = digitos(n);
         printf("\nNumero: %d\nSoma: %d\n\n", n, soma);
      }
   }
      return 0;
} //end main( )

