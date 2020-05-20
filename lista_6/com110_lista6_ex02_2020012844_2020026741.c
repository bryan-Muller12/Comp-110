#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

main(){

    

    int x,num=10,j,nota=0,cont=0;
    float porcentagem,aux;
    char gabarito[8], respostas[num];
    printf("------------------GABARITO--------------\n");

    for(x=0 ; x<8 ; x++){
        printf("Informe o gabarito da %d: ",x+1);
        setbuf(stdin, NULL);
        scanf("%c",&gabarito[x]);
    }


 


    for(x=0 ; x<num ; x++){
            printf("\n----ALUNO %d----\n",x+1);
        for(j=0 ; j<8 ; j++){
            printf("Resposta da Questão %d = ",j+1);
            setbuf(stdin, NULL);
            scanf("%c",&respostas[j]);

            if(gabarito[j] == respostas[j]){
                nota++;
            }
        }

        if(nota>=6){
            printf("\nAluno %d APROVADO - Nota: %d\n\n",x+1,nota);
            cont++;
        } else {
            printf("\nAluno %d REPROVADO - Nota: %d\n\n",x+1,nota);
        }
        nota=0;
    }



    aux = cont;
    porcentagem = aux/num;

    printf("Porcentagem de aprovação é de  %.2f ",porcentagem*100);



}
