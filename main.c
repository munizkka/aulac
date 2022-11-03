#include <stdio.h>
#include <stdlib.h>

int main ()
{
 
char * nome [20];
int idade;

printf("Escreva seu nome: \n ");
scanf("%s", &nome) ;

printf("Quantos anos você tem? \n");
scanf("%i", &idade);

printf("Prazer %s. Voce tem %i anos", nome, idade);

return 0; // valor de retorno da funcao
}