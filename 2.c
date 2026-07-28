#include <stdio.h>

//Defining the structure
struct student{
    int reg_num;
    char name[40],branch[40];
};

int main(){
    //Declaring and taking the input of array's size
    int size;
    printf("Enter number of students : ");
    scanf("%d",&size);

    //Declaring the structure variable
    struct student s[size];

    //Loop for taking input of the values
    for (int i=0;i<size;i++){
        printf("\nEnter the register number of Student %d : ",i+1);
        scanf("%d",&s[i].reg_num);
        printf("Enter the name of Student %d : ",i+1);
        scanf("%s",s[i].name);
        printf("Enter the branch of Student %d : ",i+1);
        scanf("%s",s[i].branch);
    }

    printf("\n\tStudent Details");

    //Loop for printing the values from the array
    for (int i=0;i<size;i++){
        printf("\nRegister number of student %d: %d\nName of student %d: %s\nBranch of student %d: %s\n",i+1,s[i].reg_num,i+1,s[i].name,i+1,s[i].branch);
    }
}
