#include <stdio.h>

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
