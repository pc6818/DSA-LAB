#include <stdio.h>

struct student{
    int reg_num;
    char name[20],branch[20];
};

void display(int r,char n[],char b[]){
    printf("\nRegister number: %d\nName: %s\nBranch: %s",r,n,b);
}

int main(){
    struct student s1;
    printf("Enter Register number, Name, Branch: ");
    scanf("%d %s %s",&s1.reg_num,s1.name,s1.branch);
    display(s1.reg_num,s1.name,s1.branch);
}
