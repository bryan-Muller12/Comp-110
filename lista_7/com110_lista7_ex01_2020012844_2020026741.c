#include <stdio.h>
#include <stdlib.h>

main(){

    int i,j, matriz[2][2];

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            printf("Matriz[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    int maior = matriz[0][0];

    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            if(matriz[i][j] > maior){
                maior=matriz[i][j];
            }
        }
    }

    printf("\n");
    printf("\n-----------------------MATRIZ INSERIDA----------------\n");
    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }


printf("\n");
 printf("\n-----------------------MATRIZ RESULTANTE----------------\n");
    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            printf("%d ",matriz[i][j]*maior);
        }
        printf("\n");
    }


}
