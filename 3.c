#include <stdio.h>

int main(){
    int size;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int largest=-1,second=-1;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }
    printf("Second largest number in the array: %d",second);
}