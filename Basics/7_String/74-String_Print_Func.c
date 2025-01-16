#include<stdio.h>
void printString(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
}
int main(){

    char name[] = "Kallol Das Kushol";
    printString(name);

return 0;
}