#include <stdio.h>

//Defining the structure
struct student{
    int reg_num;
    char name[40],branch[40];
};

int main(){
    //Initializing the values in the structure
    struct student s = {123,"Ravi","C.S.E"};

    //Printing the values from the structure
    printf("\n\tStudent Details\nRegister number : %d\nName : %s\nBranch : %s",s.reg_num,s.name,s.branch);
}
