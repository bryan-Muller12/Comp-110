#include <stdio.h>
#include <stdlib.h>

main(){

    int i,j,menor,linha=0,coluna;
    float m[4][7],minmax;

    for(i=0 ; i<4 ; i++){
        for(j=0 ; j<7 ; j++){
            printf("m[%d][%d]: ",i,j);
            scanf("%f",&m[i][j]);
        }
    }

    menor = m[0][0];

    for(i=0 ; i<4 ; i++){
        for(j=0 ; j<7 ; j++){
            if(m[i][j]<menor){
                menor = m[i][j];
                linha = i;
            }
        }
    }
    minmax = m[linha][0];
    for(j=0 ; j<7 ; j++){
        if(m[linha][j] > minmax){
            minmax = m[linha][j];
            coluna = j;
        }
    }
    printf("\n");
    for(i=0 ; i<4 ; i++){
        for(j=0 ; j<7 ; j++){
            printf("%.2f ",m[i][j]);
        }
        printf("\n");
    }


    printf("\nMINMAX e: m[%d][%d] = %.2f",linha,coluna,minmax);


}
