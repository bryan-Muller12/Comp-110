//Exercício 3

#include <stdio.h>

int main(void)
{
int opcao;

do
{
printf("Escolha uma Opção\n");
printf("1 \n");
printf("2\n");
printf("3\n");

printf("Opcao: ");
scanf("%d", &opcao);

switch( opcao )
{
case 1:
printf(" Valido\n");
opcao=0;
break;
case 2:
printf(" Valido \n");
opcao=0;
break;
case 3:
printf(" Valido \n");
opcao=0;
break;
default:
printf("Opcao invalida! Tente novamente.\n");
}
} while(opcao);

}
