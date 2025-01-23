#include <stdio.h>
#include <string.h>

int main()
{

    /*
    1. strlen(str_name)
    counts the number of characters excluding '\0'
    it gives output in unsigned long
    */

    char *name = "kallol";
    printf("Length=%lu \n", strlen(name));

    // If we take input by using fgets, then we will get length+1 by strlen function because fgets takes nextline as input also.

    /*
    2.strcpy(newstr, oldstr)
    copies value of the old string to the new string
    */

    char oldstr[] = "Hello";
    char newstr[100];

    strcpy(newstr, oldstr);
    puts(newstr); // In the string newstr the oldstr is copiedd

    /*
    3.strcat(firstStr, secStr)
    concatenates first string with second string
    */
    char firstStr[] = "Hello";
    char secStr[] = "World";

    strcat(firstStr, secStr);

    puts(firstStr); // Without spaces
    // The concatenated string will be stored in the firststr. So the first string must be largr enough to take the capacity.
    /*
    4.strcmp(firststr, secstr)
    Compares size of 2 strings & returns a value
    0 -> String equal
    Positive -> first > second (ASCII)
    Negative -> first < second (ASCII)
    */

    char str1[] = "apple";
    char str2[] = "ball";
    printf("%d \n", strcmp(str1, str2)); //65-66 = -1
    printf("%d \n", strcmp(str2, str1)); //66-65 = +1
   // the result comes by 1st's first letter - 2nd's first letter
   // if both are same then the result will be 0;
   // if HHA & HHB is given then the compare will be done by the last letter.
    return 0;
}