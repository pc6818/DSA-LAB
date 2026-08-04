#include <stdio.h>

struct student{
    int reg_num;
    char name[20],branch[20];
};

int main(){
    struct student s1 = {123,"Ravi","CSE"},*ptr = &s1;
    printf("Student Details\nRegister number: %d\nName: %s\nBranch: %s",ptr->reg_num,ptr->name,ptr->branch);
}
