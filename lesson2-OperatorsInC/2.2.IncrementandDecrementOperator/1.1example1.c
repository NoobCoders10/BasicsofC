#include <stdio.h>

int main(){
    //intialize  two variables 
    int a= 5, b=6 , c=7 ;

    c = (++a)+(++b);
    /* intial values of a, b and c are 5,6,7 . here we assign c as pre increament of a + pre increment of b
    the pre increment means it take  variable with incremented value. that is here in this line a value incremented to 6
    similary b will incramented by 1 to 7

    so expected output : a =6 , b =7 , c=13(6+7)
    */

    printf("a = %d, b = %d, c = %d\n",a,b,c);


}