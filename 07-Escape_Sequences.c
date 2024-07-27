/*
Escape sequences in C are combinations of characters
that begin with a backslash (\)
and are used to represent characters 
that cannot be typed directly.

the escape sequence -> 
\n represents a newline character,
\t represents a tab character,
\b adds a backspace
*/
#include<stdio.h>
int main()
{
    printf("Hello\b World   \n"); // It prints "HellWorld"
    //The o is removed by the \b

    // if we put a " \\ " then a \ will be printed
    printf("Hey im kallol\\   \n");

    // if we put a \" then it will print a (")
    printf("hey im \"Kallol\" Das Kushol");
    return 0;
    
}
