#include <stdio.h>

int main(){
    /*Declare the variable we want but most of the division result are float as datatype. so the 
    declared variables also float , because we cant print a float point number if inputed numbers are integers.
    if we done like that sometimes we get wrong answers , sometimes we didn't get the values after the point
    */

   float num1, num2;

    //let us take the variable from the user
    printf("Enter the numbers you want to multiply: ");
    scanf("%f%f",&num1,&num2);

    //show the result
    //here we calulating the pdt in printf because we don't going use the result anymore in the code
    printf("\nThe pdt of %.2f and %.2f = %.3f \n",num1,num2,(num1/num2));
    //%.2f & %.3f are special formators , for more info read the documentation given below

    return 0;
}

/*    %f special formators

 if we use %f(for printing an float number) it will print 6 digit after the decimal point . we can control it for that we use the 
 expression:  %.(how many digit want you print after decimal point)f

 it will optimize your output
 
*/