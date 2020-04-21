//Exercicio 14

#include<stdio.h>
int main(void)
{
int n[4],ma=0,me=0, resp, a;
do 
{
printf("\nDigite 4 numeros:\n ");
printf("\n");
for (a=0;a<4;a++)
{
printf("Número %d : \n", a+1);
scanf("%d", &n[a]);
}
for(a=0;a<4;a++){
if(n[a]>ma){
ma=n[a];
}
}
for(a=0;a<4;a++){
if(n[a]<me){
me=n[a];
}
}
if((n[0]>0)&&(n[1]>0)&&(n[2]>0)&&(n[3]>0)){
resp=1;
}else
printf("\nO maior valor é %d e o menor é %d", ma,me);
}while (resp==1);
return 0;
}
