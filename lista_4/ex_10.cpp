//Execício 10

#include <stdio.h>

int main(void) {
float r,vv,vm;
printf("Digite a velocidade do veiculo\n");
scanf("%f",&vv);
printf("Digite a velocidade maxima da via\n");
scanf("%f",&vm);
r=(vv-vm)/vm*100;
if(r<0){
printf("Não houve multa");
}else if(r<=20){
printf("Você exedeu em %.2f por cento a velocidade da via, o valor damulta é R$ 85,13",r);
}else if (r<=50){
printf("Você exedeu em %.2f por cento a velocidade da via, o valor damulta é R$ 127,69",r);
}else 
printf("Você exedeu em %.2f por cento a velocidade da via, o valor damulta é R$ 574,62",r);
return 0;
}
