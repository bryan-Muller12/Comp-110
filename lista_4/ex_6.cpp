//Exercício 6

#include <stdio.h>

int main(void) {
float n1,n2, a,s1,s2,d1,d2,m;
printf("Digite 2 númeors\n");
scanf("%f%f",&n1,&n2);
a=n1+n2;
s1=n1-n2;
s2=n2-n1;
d1=n1/n2;
d2=n2/n1;
m=n1*n2;
printf("%.1f + %.1f = %.1f\n", n1,n2,a); 
printf("%.1f - %.1f = %.1f\n", n1,n2,s1); 
printf("%.1f - %.1f = %.1f\n", n2,n1,s2); 
printf("%.1f / %.1f = %.1f\n", n1,n2,d1); 
printf("%.1f / %.1f = %.1f\n", n2,n1,d2); 
printf("%.1f * %.1f = %.1f\n", n1,n2,m); 

return 0;
}
