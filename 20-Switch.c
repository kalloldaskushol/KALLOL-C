
#include <stdio.h>
/*
switch-case is used when we have to make a choice between number of alternatives for a given variable.
*/
int main()
{

    int a;
    printf("Enter a = ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("You entered 1\n");
    case 2:
        printf("You entered 2\n");
    case 3:
        printf("You entered 3\n");
    case 4:
        printf("You entered 4\n");
    default:
        printf("Nothing Matched\n");
    }
    // in this program it will not run properly if we add 1
    // then all line will exicute all lines
    // to solve this we have to use break statement
    int b;
    printf("Enter b = ");
    scanf("%d", &b);

    switch (b)
    {
    case 1:
        printf("You entered 1\n");
        break;
    case 2:
        printf("You entered 2\n");
        break;
    case 3:
        printf("You entered 3\n");
        break;
    case 4:
        printf("You entered 4\n");
        break;
    default:
        printf("Nothing Matched\n");
        break;
    } // in this case only that switch will be active which will match the condition
    /*
    •We can use switch-case statements even by writing cases in any order of our choice (not necessarily ascending).
    -> we can use 4 in top

    •char values are allowed as they can be easily evaluated to an integer.
    -> if we put a char then it will transfer into integer

    •A switch can occur within another but in practice this is rarely done.
    -> switch loop
    
    */
    return 0;
}