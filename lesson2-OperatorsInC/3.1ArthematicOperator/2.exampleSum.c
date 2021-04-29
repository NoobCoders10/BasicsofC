#include <stdio.h>

int main(){
    //here we want 3 variables. two for storing the number entered from the user and the last one store the sum of that numbers
    //intialize the 2 numbers
    int num1, num2;
    //declare sum variable
    int sum = 0;

    //take the input from the user
    printf("Enter the numbers");
    scanf("%d%d",&num1,&num2);

    //add these numbers and assign it to sum variable
    sum = num1 + num2;

    //print sum
    printf("Sum = %d\n",sum);

    return 0;
}

/*
here we use integer data type, but you can use  char or float data types also . (please try it your self)

In this programme we store the value of addition result to the variable sum. the same progamme you can do it by another way
ie;
 #include <stdio.h>

int main(){
    
    int num1, num2;
    int sum = 0;

   
    printf("Enter the numbers");
    scanf("%d%d",&num1,&num2);

    

    //print sum
    printf("Sum = %d\n",(num1 + num2));

    return 0;
}

also you can perform small calculation on printf also , do not forget to put in a bracket. otherwise sometimes you will get wrong results

substraction(difference) same as addition. try to do it your self

*/