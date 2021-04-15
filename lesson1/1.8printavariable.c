//TODO: Print a Variable

//include our stadard header files
#include<stdio.h>

// here i am going to int function . you can use void also

int main(){
    //declare int variable a to store integer value 5
    int a = 5;
    //for printing we use printf function
    /*But there is some problems if write  anything inside the printf in double cots that print directly. here we want to the formaters
    here we are going print a integer value so we the formator %d. if float then use %f if character use %c
    */

   printf("a=%d\n",a);
   /*As you can see our print statement in double cots we mention a and print the value we use %d (as mention above) */
    // output of this programme: a=5
}

/*
If there is more than one  variable a=5 , b=6 and c=7 (this will be also a float or a char)and if you are trying print the value 
you should write mention the variable name correctly after the double cots
like this:
    printf("a=%d , b=%d and c=%d",a,b,c); 
    it will print a=5 , b=6 and c=7
if you write like this:
     printf("a=%d , b=%d and c=%d",a,c,b); 
    it will print a=5 , b=7 and c=8

    that changes the variables value . so maintain a correct order 
*/
