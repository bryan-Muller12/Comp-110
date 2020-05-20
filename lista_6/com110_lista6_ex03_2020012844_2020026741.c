#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

    int i,j,vetor[20],cont=1,valores=0,z=0,valor;

    for(i=0 ; i<20 ; i++){
        printf("Informe o valor %d: ",i+1);
        scanf("%d",&vetor[i]);

        if(vetor[i] == 0){
            z++;
        }
    }
	system("cls");

    printf("\n---Numeros Cadastrados---\n");

    for(i=0 ; i<20 ; i++){
        printf("%d\n",vetor[i]);
    }
    
    system ("pause");
    system("cls");

    for(i=0 ; i<20 ; i++){
        cont=0;
        valor = vetor[i];
         for(j=0;j<9;j++){
            if((valor==vetor[j]) && (i!=j) && (valor!=0)){
                cont++;
                vetor[j]=0;
            }
        }

        if(vetor[i]!=0){
                printf("\nO valor %d apareceu = %d vezes\n",vetor[i],cont);
        }
    }

   
    }

