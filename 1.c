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

struct student{
    int reg_num;
    char name[20],branch[20];
    struct student *next;
};

int main(){
    struct student s1,s2;
    printf("Enter Register number, Name, Branch for student 1: ");
    scanf("%d %s %s",&s1.reg_num,s1.name,s1.branch);
    printf("Enter Register number, Name, Branch for student 2: ");
    scanf("%d %s %s",&s2.reg_num,s2.name,s2.branch);
    s1.next = &s2;
    s2.next = NULL;
    printf("\nStudent 1\nRegister number: %d\nName: %s\nBranch: %s\n",s1.reg_num,s1.name,s1.branch);
    printf("\nStudent 2\nRegister number: %d\nName: %s\nBranch: %s\n",s1.next->reg_num,s1.next->name,s1.next->branch);
}
