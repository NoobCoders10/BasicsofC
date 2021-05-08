#include <stdio.h>

int main(){
    //declaration of variables
    int num1,num2,num3;

    //get the numbers from user
    printf("\nEnter 3 numbers you want to multiply:");
    scanf("%d%d%d",&num1,&num2,&num3);

    //print the pdt of these numbers
    printf("\nThe Product of %d , %d and %d = %d\n",num1,num2,num3,(num1*num2*num3));
    return 0;
}