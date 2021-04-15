//Todo: take integer input from user and print it

//include stadard library
#include <stdio.h>

//main function
void main(){
    //declare all the variables we are using in main function
    int num; //num is the user going to enter
    //give an idea to the user what is he want to do
    printf("Enter a number");
    //take that by using scanf function;
    scanf("%d",&num);

    //print that number
    printf("you enterd : %d",num);
}

/*
if we want to take two inputs at ones. (this will be understand by the next lesson . at this time just keep in mind)
ie;
     scanf("%d",&num1);
     scanf("%d",&num2);

you can short like this:
        scanf("%d%d",&num1,&num2);
    but don't forget write numbers in correct order . other will code will make a mistake.
*/

//with this our first lesson ended . 
//before going to the next lesson , plz do the problem given in the problem.txt file
// Thank you . keep going ....