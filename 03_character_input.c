#include <stdio.h>

int main(void) {
    char user_char;

    printf("Enter a single character: ");
    scanf(" %c", &user_char);

    printf("You entered: %c\n", user_char);
    return 0;
}
