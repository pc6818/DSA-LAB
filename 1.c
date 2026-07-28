#include <stdio.h>

struct student{
    int reg_num;
    char name[40],branch[10];
};

int main(){
    struct student s;
    
    printf("Enter your registration number: ");
    scanf("%d",&s.reg_num);
    printf("Enter your name: ");
    scanf("%s",s.name);
    printf("Enter your branch: ");
    scanf("%s",s.branch);

    printf("\n\tStudent Details\nRegister Number: %d\nName: %s\nBranch: %s",s.reg_num,s.name,s.branch);
}