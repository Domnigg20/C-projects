#include <stdio.h>
#include <ctype.h>  // For isspace()

char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);

int main(void) {
    int choice;

    while ((choice = get_choice()) != 'q') {
        switch (choice) {
        case 'a': printf("Buy low, sell high.\n");
            break;
        case 'b': putchar('\a'); /* ANSI */
            break;
        case 'c': count();
            break;
        default: printf("Program error!\n");
            break;
        }
    }
    printf("Bye.\n");

    return 0;
}

void count(void) {
    int n, i;
    printf("Count how far? Enter an integer:\n");
    n = get_int();
    for (i = 1; i <= n; i++)
        printf("%d\n", i);
    while (getchar() != '\n')
        continue;
}

char get_choice(void) {
    int ch;
    printf("Enter the letter of your choice:\n");
    printf("a. advice b. bell\n");
    printf("c. count q. quit\n");
    ch = get_first();
    while ((ch < 'a' || ch > 'c') && ch != 'q') {
        printf("Please respond with a, b, c, or q.\n");
        ch = get_first();
    }
    return ch;
}

char get_first(void) {
    int ch;
    
    // Skip whitespace characters
    while (isspace(ch = getchar())) {
        // Just skip whitespace characters
    }

    return ch;  // Return the first non-whitespace character
}

int get_int(void) {
    int input;
    char ch;

    // Skip leading whitespace
    while (isspace(ch = getchar())) {
        // Just skip whitespace characters
    }

    // Print out the first non-whitespace character encountered
    printf("The first non-whitespace character is: %c\n", ch);

    // Put the character back in the input stream
    ungetc(ch, stdin);

    // Validate integer input
    while (scanf("%d", &input) != 1) {
        while ((ch = getchar()) != '\n')  // Clear the rest of the invalid input
            putchar(ch);  // Print the invalid input for feedback

        printf(" is not an integer.\nPlease enter an integer value, such as 25, -178, or 3: ");
    }

    return input;
}
