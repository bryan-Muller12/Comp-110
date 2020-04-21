//Exercício 7 

#include <stdio.h>

int main(void) {
float a, m ,imc;
printf("Digite sua altura\n");
scanf("%f",&a);
printf("Digite sua massa\n");
scanf("%f",&m);

imc= m/(a*a);

printf("Seu IMC é de %.2f",imc);

return 0;
}
