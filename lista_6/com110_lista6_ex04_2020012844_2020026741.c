#include <stdlib.h>
#include <locale.h>

main(){

    char p[10],in[10];
    int i;


    for(i=0 ; i<10 ; i++){
        p[i] = NULL;
    }

    printf("Informe a palavra: ");
    setbuf(stdin, NULL);
    gets(p);


    printf("\nInverso da palavra:\n");
    for(i=10 ; i>0 ; i--){

        if(p[i-1]!=NULL){
        printf("%c",p[i-1]);
        }
    }
}
