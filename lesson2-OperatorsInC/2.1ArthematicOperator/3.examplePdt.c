#include <stdio.h>

int main(){
    //declare the variables we want
    int num1, num2;

    //let us take the variable from the user
    printf("Enter the numbers you want to multiply: ");
    scanf("%d%d",&num1,&num2);

    //show the result
    //here we calulating the pdt in printf because we don't going use the result anymore in the code
    printf("\nThe pdt of %d and %d = %d \n",num1,num2,(num1*num2));
    return 0;
}