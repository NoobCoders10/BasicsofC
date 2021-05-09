//programme for printing the given number is odd or even

#include <stdio.h>

int main(){
    int num;

    printf("\nEnter a Number:");
    scanf("%d",&num);

    //if else or printing even or odd (condition checking)

    if(num % 2 == 0){
        printf("\n %d is an Even Number\n",num);
    }else{
        printf("\n %d is an Odd Number\n",num);
    }


}