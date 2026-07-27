#include <stdio.h>

int main(){
    int i,j,k,r1,c1,r2,c2;
    printf("Enter the number of rows and columns in matrix 1: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of rows and columns in matrix 2: ");
    scanf("%d %d",&r2,&c2);
    int m1[r1][c1],m2[r2][c2];
    printf("Enter the elements for matrix 1\n");
    for (i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("Enter the element (%d,%d):",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter the elements for matrix 2\n");
    for (i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("Enter the element (%d,%d):",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }
    }
    int result[r1][c2];
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    printf("Result\n");
    for (i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}