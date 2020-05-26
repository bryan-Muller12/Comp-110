#include <stdio.h>
#include <stdlib.h>


int main()
{
	int M[8][8], x=0, i, j;

    printf("Digite os Elementos da Matriz\n");

    for(i=0 ; i<8 ; i++){
        for(j=0 ; j<8 ; j++){
            printf("M[%d][%d]: ",i,j);
            scanf("%d",&M[i][j]);
            }
    }

    for(i=0 ; i<8 ; i++){
        for(j=0 ; j<8 ; j++){
            if(M[i][j] != M[j][i]){
                x =1;
                i=8;
                j=8;
            }
        }
    }
    printf("\n");
    for(i=0 ; i<8 ; i++){
        for(j=0 ; j<8 ; j++){
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }


    if(x==0){
        printf("\nEla é simetrica!");
    }else{
        printf("\nNão é simetrica!");
    }
    printf("\n");
    
    system("pause");
}
