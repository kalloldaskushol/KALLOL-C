#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;

    // Open the file in read mode
    file = fopen("input.txt", "r");
    if (file == NULL) {
        // If the file cannot be opened, print an error message and exit
        printf("Error opening file");
        return EXIT_FAILURE;
    }

    // Read the file character by character until EOF (End of File) is reached
    while ((ch = fgetc(file)) != EOF) {
        // Print each character to the console
        printf("%c \n", fgetc(file));
    }

    // Close the file to free up resources
    fclose(file);

    return EXIT_SUCCESS;
}