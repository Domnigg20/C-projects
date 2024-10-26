/*
Write a program that reads input until encountering the # character and then
reports the number of spaces read, the number of newline characters read, and
the number of all other characters read.

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