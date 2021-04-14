/*this file help to print data size of datatypes
*/
#include<stdio.h>
int main(){

    //to print datasize of any datatype just use a  fuction called sizeof. for example
    //in case of integer
    printf("%ld bytes for storing an integer in memory.\n",sizeof(int)); //it print a output as 4 bytes for storing a integer value. 
    //the differnce in memory is an integer number so %ld is used. %ld is a special formater to print the sizeof function.

    // in case of float
    printf("%ld bytes for storing an float in memory.\n",sizeof(float)); //it print a output as 4 bytes for storing a float value.

    // in case of char
    printf("%ld bytes for storing an char in memory.\n",sizeof(char));//it print a output as 1 bytes for storing an char value in memory.

    //in case of double
    printf("%ld bytes for storing an double in memory\n",sizeof(double));//output:- 8 byte for storing an double value in memory.

   
    return 0;
}
