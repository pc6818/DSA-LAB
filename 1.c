#include <stdio.h>
#include <stdlib.h>

int main(){
    int r1,c1,r2,c2,i,j,k;
    printf("Enter rows & columns for matrix 1: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows & columns for matrix 2: ");
    scanf("%d %d",&r2,&c2);

    if(c1!=r2){
        printf("Multiplication not possible.");
        return 0;
    }
    int **A = (int **)malloc(r1*sizeof(int*));
    int **B = (int **)malloc(r2*sizeof(int*));
    int **C = (int **)malloc(r1*sizeof(int*));

    printf("Enter elements for matrix 1:\n");
    for (i=0;i<r1;i++){
        for (j=0;j<c1;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements for matrix 2:\n");
    for (i=0;i<r2;i++){
        for (j=0;j<c2;j++){
            scanf("%d",&B[i][j]);
        }
    }

    printf("Result:\n");
    for (i=0;i<r1;i++){
        for (j=0;j<c2;j++){
            C[i][j]=0;
            for (k=0;k<c1;k++){
                C[i][j] += A[i][k] * B[k][j];
            }
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}
