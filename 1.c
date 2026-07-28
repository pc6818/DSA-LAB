#include <stdio.h>

//Defining the structure
struct student{
    int reg_num;
    char name[40],branch[40];
};

int main(){
    //Declaring the structure variable
    struct student s;

    //Taking input from the user
    printf("Enter the register number: ");
    scanf("%d",&s.reg_num);
    printf("Enter the name: ");
    scanf("%s",s.name);
    printf("Enter the branch: ");
    scanf("%s",s.branch);

    //Printing the values
    printf("\n\tStudent Details\nRegister number : %d\nName : %s\nBranch : %s",s.reg_num,s.name,s.branch);

}
