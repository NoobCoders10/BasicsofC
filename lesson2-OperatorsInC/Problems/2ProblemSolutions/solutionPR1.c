/* Try to do code your own . If stucked reffer this programme
*/

#include <stdio.h>

int main(){
    float num1,num2;

    //get the number from user
    printf("Enter two numbers:");
    scanf("%f%f",&num1,&num2);

    //print calculations
    //print sum of the numbers user inserted
    printf("The sum of %.2f and %2.f = %.2f",num1,num2,(num1+num2));
    //print difffernce
    printf("The difference of %.2f and %2.f = %.2f",num1,num2,(num1-num2));
    //print pdt
    printf("The Product of %.2f and %2.f = %.2f",num1,num2,(num1*num2));
    //print division result
    printf("The Result  of  division %.2f and %2.f = %.3f",num1,num2,(num1/num2));
    

}