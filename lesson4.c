/*

Using if else statements, write a program that reads input up to #, replaces
each period with an exclamation mark, replaces each exclamation mark initially
present with two exclamation marks, and reports at the end the number of
substitutions it has made.
*/



#include<stdio.h>
#define STOP '#'

int main (void) {
char ch;
int subs= 0;



	printf("Enter input  :\n");
	while ((ch = getchar()) != STOP)

    {

//for every period, replace with !
    
 if (ch == '.') {
            putchar('!');    // Replace period with exclamation mark
            subs++;
        } else if (ch == '!') {
            putchar('!');    // Replace one exclamation mark with two
            putchar('!');
            subs++;
        } else {
            putchar(ch);     // Output the character as is
        }
    }

    printf("\nTotal substitutions made: %d\n", subs);  // Output the count of substitutions


return 0;

}