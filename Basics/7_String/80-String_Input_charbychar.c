#include<stdio.h>

int main(){

    // like your making a loop which will take input char by char and will stop when it hits the enter or the \n.
    char str[100];
    char ch;
    int i=0;
    while(ch !='\n'){
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0'; // when loop ends the i is in the last and we have to put a null charecter in the last.
    puts(str);

return 0;
}   