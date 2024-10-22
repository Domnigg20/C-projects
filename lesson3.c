/*
Write a program that reads integers until 0 is entered. After input terminates, the
program should report the total number of even integers (excluding the 0)
entered, the average value of the even integers, the total number of odd integers
entered, and the average value of the odd integers
*/

#include <stdio.h>

#define STOP 0


int main (void) {

    int number;
    int count_even = 0; 
    int count_odd= 0;
    int sum_even = 0;
    int sum_odd= 0;


 
printf("Enter an Integer\n");
	printf("Enter input (%c to stop):\n", STOP);
	while ((scanf("%d", &number) != STOP))
{

    if (number % 2 == 0 && number != 0){
    printf ("The number %d is even \n", number);
    count_even++;
     sum_even += number;


    }

    else{
        
     printf("The number %d is odd\n", number);
    count_odd++;
    sum_odd += number;
    }
if (count_even >0)
{

    printf("Average of odd numbers: %.2f\n", (float)sum_even / count_even);

}

else {
        printf("No even numbers entered.\n");
    }

if (count_odd >0)
{

    printf("Average of odd numbers: %.2f\n", (float)sum_odd /count_odd);

}
else {
        printf("No odd numbers entered.\n");
    }








}


	return 0;
}