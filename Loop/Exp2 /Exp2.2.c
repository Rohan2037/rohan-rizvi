#include<stdio.h>


int main(){
    int start_num,end_num,sum=0,i;

    printf("\t\t\t *** Sum of Odd Numbers *** \n\n\n");

    // Take User Input
    printf("Enter Start Number: ");
    scanf("%d", &start_num);
    printf("Enter Ending Number: ");
    scanf("%d", &end_num);

    // Check if starting number is higher than ending number
    if(start_num > end_num){
        printf("Error: Ending number should be higher than Starting Number");
        return 1;
    }
