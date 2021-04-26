#include <stdio.h>

int main(){
    //intialize  two variables 
    int a= 5, b=6 , c=0 ;

    c = (a++)+(b++);
    /* intial values of a, b and c are 5,6,7 . here we assign c as post increament of a +post increment of b
    the post increment means take the original value first and calculate and then change or increment value by one 
    so expected output : a =6 , b =7 , c=11
    */

    printf("a = %d, b = %d, c = %d\n",a,b,c);


}

/*
We hope You understand ivaluation of increment operator. It is as for decrement operator. plz do it your on . 
we added some problems on problem.txt file plz check it . In comming lesson  you can understand use of these of things very well
keep going with us

*/