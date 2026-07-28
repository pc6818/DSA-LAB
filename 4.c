#include <stdio.h>

struct address{
    int door_no,pincode;
    char city[40];
};

struct student{
    int reg_num;
    char name[40],branch[10];
    struct address add;
};

int main(){
    struct student s;
    printf("Enter the register number: ");
    scanf("%d",&s.reg_num);
    printf("Enter the name: ");
    scanf("%s",s.name);
    printf("Enter the branch: ");
    scanf("%s",s.branch);
    printf("Enter the Door number: ");
    scanf("%d",&s.add.door_no);
    printf("Enter the city: ");
    scanf("%s",s.add.city);
    printf("Enter the pincode: ");
    scanf("%d",&s.add.pincode);

    printf("\t\nStudent Details\nRegister number: %d\nName: %s\nBranch: %s\nDoor number: %d\nCity: %s\nPincode: %d",s.reg_num,s.name,s.branch,s.add.door_no,s.add.city,s.add.pincode);
}