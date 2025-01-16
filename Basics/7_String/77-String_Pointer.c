#include<stdio.h>
/*
char *str_name = "hello";
stores string in memory and the asssigned address is stored in the char pointer (str_name)

char *str_name = "hello";
can be reinitialized 

but if we initialised with array then it cant be changed.

char str_name = "hello";
cannot be reinitialized

*/
int main(){

    char *canchange = "hello world";
    puts(canchange);
    canchange = "Hi world";
    puts(canchange);

    char cannotchange[] = "hello world";
    puts(cannotchange);
    // cannotchange = "hi world"
// which is uncorrect
return 0;
}