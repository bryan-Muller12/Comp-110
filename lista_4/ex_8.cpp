//Execício 8

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int h,p,resp;
do{
printf("Digite um horario no formato 24h\n");
scanf("%d",&h);
if(h<=11){
printf("Periodo da manhã\n");
break;
}else if (h<=17){
printf("Periodo da tarde\n");
break;
}else if (h<=24){
printf("Periodo da Noite\n");
break;
}else
system("clear");
printf("Formato de hora inválido\n");
resp=1;
}while (resp==1);

return 0;
}
