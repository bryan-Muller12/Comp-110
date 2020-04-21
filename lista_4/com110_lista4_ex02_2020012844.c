//Exercícios 2

#include <stdio.h>
#include <math.h>

int main(void)
{
int x, r, p, contador;

printf("Digite um numero\n");
scanf("%d",&x);
printf("Digite quantas vezes deve ser potencializado\n");
scanf("%d",&p);

for(contador = 0; contador <= p; contador++)
{
r= pow(x,contador);
printf("%d \n", r);
}

return(0);
}
