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
#define STOP 0
#define PAY_RATE 10
#define OT_PAY (PAY_RATE * 1.5)
#define norm_hrs 40
#define TAX_RATE 0.15
#define SECOND_TAX_RATE 0.20  // 20%
#define THIRD_TAX_RATE 0.25   // 25%


#define FIRST_LIMIT 300       // First $300
#define SECOND_LIMIT 450      // Next $150


int main (void)
{

int hrs;
double gross_pay; //total comp
//float net_pay;  //comp - taxes
float tax_amt;


printf("enter a number of hrs:\n");
printf("Enter input (%c to stop):\n", STOP);

while (scanf("%d", &hrs) == 1) {
if (hrs>norm_hrs) {

gross_pay =  (OT_PAY* hrs);
printf("The value of gross pay is %.2lf\n", gross_pay);
}




if (hrs<norm_hrs)
gross_pay = (PAY_RATE* hrs);
printf("The value of gross pay is %.2lf\n", gross_pay);

}


// Calculate tax for first $300
//Tax rate: 15% of the first $300
//15% for the enxt %150
////20% of the rest



if (gross_pay <= FIRST_LIMIT) {
    tax_amt = TAX_RATE * gross_pay;
printf("You will pay a tax of  %.2lf\n", tax_amt);


} else if (gross_pay <= SECOND_LIMIT) {
    tax_amt = (TAX_RATE * 300) + (SECOND_TAX_RATE * (gross_pay - 300));
printf("You will pay a tax of  %.2lf\n", tax_amt);

} else {
    tax_amt = (TAX_RATE * 300) + (SECOND_TAX_RATE * 150) + (THIRD_TAX_RATE * (gross_pay - 450));
    printf("You will pay a tax of  %.2lf\n", tax_amt);

}




 
return 0;

}


