#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

    setlocale(LC_ALL,"Portuguese");

    int n,i,cont;
    char p[30];

    for(i=0 ; i<30 ;i++){

    p[i] = NULL;

    }

    printf("Informe a palavra: ");
    gets(p);

    printf("Informe o numero para cripitografar: ");
    setbuf(stdin, NULL);
    scanf("%d",&n);

    printf("\n-------Palavra Criptografada-------\n");

    for(i=0 ; i<30 ;i++){

        int valor = p[i]+n;
        if(p[i] != NULL){
            printf("%c",valor);
        }

    }
}
