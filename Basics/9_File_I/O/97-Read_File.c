#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("Read_File.txt", "r");

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("Charecter = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Charecter = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Charecter = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Charecter = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Charecter = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Charecter = %c\n", ch);// when limit cross then the last word prints always. like if 123 didn't existeed then it printed 'o'
 
 
    int a;
    fscanf(fptr, "%d", &a);
    printf("Number = %d\n", a);
    fscanf(fptr, "%d", &a);
    printf("Number = %d\n",a);
    fscanf(fptr, "%d", &a);
    printf("Number = %d\n",a);

    fclose(fptr);
    return 0;
}