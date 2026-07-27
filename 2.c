#include <stdio.h>

int main(){
    int sub_count;
    printf("Enter the number of subjects: ");
    scanf("%d",&sub_count);
    int marks[sub_count];
    for (int i=0;i<sub_count;i++){
        printf("Enter the marks for subject %d: ",i+1);
        scanf("%d",&marks[i]);
    }
    char result[sub_count];
    for (int i=0;i<sub_count;i++){
        if (marks[i] >= 90){
            result[i] = 'O';
        }
        else if (marks[i] >= 80){
            result[i] = 'A';
        }
        else if (marks[i] >= 70){
            result[i] = 'B';
        }
        else if (marks[i] >= 60){
            result[i] = 'C';
        }
        else if (marks[i] >= 50){
            result[i] = 'D';
        }
        else{
            result[i] = 'F';
        }
    }
    printf("\nResults\n");
    for (int i=0;i<sub_count;i++){
        printf("Grade for Subject %d : %c\n",i+1,result[i]);
    }
}