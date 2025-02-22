
//Design a function that takes a string pointer as an argument and returns a pointer
//to the first space character in the string on or after the pointed-to position. Have
//it return a null pointer if it finds no spaces.

#include<stdio.h>

char* ptr_space (const char* str) {


	 
    while (*str != '\0') {
    //check if str points to space
    if (*str == ' ') {
    
    return (char*)str; //returning ptr to space
    }
        

    str++;
    
    }
    
    return -1; //no space found
   
}

int main (void) {

 char* str = "Hello World!";
    char *x = ptr_space(str);
    
 if (x) {
        printf("First space found at position: %ld\n", x - str);
    } else {
        printf("No space found.\n");
    }

    return 0;
}
    

