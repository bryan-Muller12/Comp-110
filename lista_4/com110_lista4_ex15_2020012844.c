//Execícios 15

#include <stdio.h>

int main( ){
int j,i, n;
printf("Digite um numero\n");
scanf("%d",&n);
for (j = 0; j<=n; j++){
for (i=0; i< j; i++){
printf ("* ");
}
printf ("\n");
}
}
