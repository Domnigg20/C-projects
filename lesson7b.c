/*


*****************************************************************
Enter the number corresponding to the desired pay rate or action:
1) $8.75/hr
2) $9.33/hr
3) $10.00/hr
4) $11.20/hr
5) quit
*****************************************************************
*/

/*
Write a program that requests the hours worked in a week and then prints the
gross pay, the taxes, and the net pay. Assume the following:
a. Basic pay rate = $10.00/hr
b. Overtime (in excess of 40 hours) = time and a half
c. Tax rate: 15% of the first $300
20% of the next $150
25% of the rest
Use #define constants, and don't worry if the example does not conform to
current tax law.

*/


#include <stdio.h>
#define STOP 5
//define OT_PAY (norm_pay * 1.5) // if OT hours
//define norm_hrs 40 //normal hours
#define HR1 8.75
#define HR2 9.33
#define HR3 10.00
#define HR4 11.20

#define FIRST_LIMIT 300       // First $300
#define SECOND_LIMIT 450      // Next $150


int main (void)
{

int pay_rate_choice = 0;
double pay_rate = 0;
int hrs= 0;  //no of hrs works
double pay_choice= 0; // Salary per hr
double gross_pay= 0; //total comp
//float net_pay;  //comp - taxes




printf("Enter number of hours if more than fulltime  (negative number to stop):\n");

while (scanf("%d", &hrs )== 1 && hrs >= 0){

printf("Enter the number corresponding to the desired pay rate or action (5 to stop):\n"
       "1) $8.75/hr\t2) $9.33/hr\n"
       "3) $10.00/hr\t4) $11.20/hr\n");

if (scanf ("%d", &pay_rate_choice )!=1 ||  pay_rate_choice == STOP) {
    break;  // Stop if input is invalid or if 5 is entered
}




switch(pay_rate_choice){
    case 1:
    pay_rate = HR1;
    break;
case 2:
    pay_rate = HR2;
    break;

case 3:
    pay_rate = HR3;
    break;

case 4:
    pay_rate = HR4;
    break;
}


gross_pay = pay_rate*hrs;
printf("The value of gross pay is %.2lf\n", gross_pay);


}


printf("Program complete. \n");
 
return 0;

}

