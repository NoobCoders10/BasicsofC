#include <stdio.h>

int main(){
    //intialize  two variables 
    int a= 5, b=6 , c=0 ;

    c = (a++)+(++b);
    /* intial values of a, b and c are 5,6,7 . here we assign c as post increament of a + pre increment of b
    the pre increment means it take  variable with incremented value. that is here in this line a value of  b will incramented by 1 to 7,
    but here a is on post increment , so in this step a value is taken as 5 and calculate value of c and incremented by 1 

    so expected output : a =6 , b =7 , c=12
    */

    printf("a = %d, b = %d, c = %d\n",a,b,c);


}