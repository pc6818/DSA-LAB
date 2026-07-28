#include <stdio.h>

struct student{
    int reg_num;
    char name[40],branch[10];
};

int main(){
    int size;
    printf("Enter the number of students: ");
    scanf("%d",&size);
    struct student s[size];
    for(int i=0;i<size;i++){
        printf("\nEnter the register number of student %d: ",i+1);
        scanf("%d",&s[i].reg_num);
        printf("Enter the name of student %d: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter the branch of student %d: ",i+1);
        scanf("%s",s[i].branch);
    }
    printf("\t\nStudent Records");
    for(int i=0;i<size;i++){
        printf("\nRegister number of student %d: %d",i+1,s[i].reg_num);
        printf("\nName of student %d: %s",i+1,s[i].name);
        printf("\nBranch of student %d: %s",i+1,s[i].branch);
    }
}