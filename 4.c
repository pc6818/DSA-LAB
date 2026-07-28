#include <stdio.h>

//Defining the inner structure
struct address{
    int door_num,pincode;
    char city[40];
};

//Defining the outer structure
struct student{
    int reg_num;
    char name[40],branch[40];
    struct address add;
};

int main(){
    //Declaring structure variable
    struct student s;

    //Taking input from the user
    printf("Enter the Details\nRegister number : ");
    scanf("%d",&s.reg_num);
    printf("Name : ");
    scanf("%s",s.name);
    printf("Branch : ");
    scanf("%s",s.branch);
    printf("Door number : ");
    scanf("%d",&s.add.door_num);
    printf("City : ");
    scanf("%s",s.add.city);
    printf("Pincode : ");
    scanf("%d",&s.add.pincode);

    //Printing the details
    printf("\n\tStudent Details\nRegister number: %d\nName: %s\nBranch: %s\nDoor number: %d\nCity: %s\nPincode: %d",s.reg_num,s.name,s.branch,s.add.door_num,s.add.city,s.add.pincode);

}
