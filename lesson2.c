/*
Write a program that reads input until encountering #. Have the program print
each input character and its ASCII decimal code. Print eight character-code pairs
per line. Suggestion: Use a character count and the modulus operator (%) to print
a newline character for every eight cycles of the loop.
*/

#include <stdio.h>


int main (void)

{


int ch;
int sp;
int nl;
int no;
while ((ch = getchar()) != '#')

{

if (ch == '\n'){
nl ++;
printf("The number of newlines are %d\n", nl);


}

else if (ch == ' '){
sp++;
printf("The number of spaces are %d\n", sp);

}
       

else 
{

    no++;
    printf("The number of other chars are %d\n", no);

}


}
  return 0;
}