#include <stdio.h>
#include <stdlib.h>

main(){

    int linha=5,coluna=7;
    int i,j,x,matriz[5][7],ponto=0;
    int menorLinha[linha], maiorColuna[coluna],maior,menor;

    for(i=0 ; i<5 ; i++){
        for(j=0 ; j<7 ; j++){
            printf("Matriz[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    menor = matriz[0][0];

    for(j=0 ; j<coluna ; j++){
        for(i=0 ; i<linha ; i++){
            if(matriz[i][j]>maior){
                maior = matriz[i][j];
            }
        }
        maiorColuna[j] = maior;
    }

    for(i=0 ; i<linha ; i++){
        for(j=0 ; j<coluna ; j++){
            if(matriz[i][j]<menor){
                menor = matriz[i][j];
            }
        }
        menorLinha[i] = menor;
    }

    for(i=0 ; i<linha ; i++){
        for(j=0 ; j<coluna ; j++){
            if(menorLinha[i] == maiorColuna[j]){
                printf("\nPonto de Sela: Matriz[%d][%d] = %d",i,j,matriz[i][j]);
                ponto++;
                
                printf("\n");
    for(i=0 ; i<5 ; i++){
        for(j=0 ; j<7 ; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
            }
        }
    }

    if(ponto == 0){
        printf("Ponto de sela inexistente");
    }

}
