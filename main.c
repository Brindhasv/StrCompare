#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Get the first string from the user
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    // Remove newline character if present
    str1[strcspn(str1, "\n")] = '\0';

    // Get the second string from the user
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Remove newline character if present
    str2[strcspn(str2, "\n")] = '\0';

    // Compare the two strings
    int result = strcmp(str1, str2);

    // Print the result of the comparison
    if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else if (result > 0) {
        printf("The first string is greater than the second string.\n");
    } else {
        printf("The two strings are equal.\n");
    }

    return 0;
}
