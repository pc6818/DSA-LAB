#include <stdio.h>

struct student{
    int reg_num;
    char name[20],branch[20];
};

void display(struct student s){
    printf("\nRegister number: %d\nName: %s\nBranch: %s",s.reg_num,s.name,s.branch);
}

int main(){
    struct student s1;
    printf("Enter Register number, Name, Branch: ");
    scanf("%d %s %s",&s1.reg_num,s1.name,s1.branch);
    display(s1);
}
