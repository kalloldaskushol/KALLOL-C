/*
array is a data structure or a collection of similar data types. It is a linear data structure, where data is stored in a sequence. It is also known as a collection of variables of the same type.

char takes less byte then int

string is a collection of characters.
*/
#include<stdio.h>

int main(){

    char arr[5] = {'A', 'B', 'C', 'D', 'E'};
    // a character array terminated by a '\0'(null charecter) is called STRING)
    // null character denotes string termination

    char name[] = {'k','a','l','l','o','l', '\0'};
    // char name[] = "kallol"; // it will be double score and no null charecter is needed. Compiler will undersand.

    // both are same. string is stored in the memory location like a array does. but in the last their will be a charecter array

    for(int i=0;i<name[i]!='\0';i++){
        printf("%c", name[i]);
    }
printf("\n");

    char firstName[] = "Kallol Das ";
    char lastName[] = "Kushol";
    
    for(int i=0; firstName[i] != '\0'; i++) printf("%c", firstName[i]);    
    for(int i=0; lastName[i] != '\0'; i++) printf("%c", lastName[i]);

return 0;
}