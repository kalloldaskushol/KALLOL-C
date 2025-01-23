#include<stdio.h>
void slice( char str[], int n, int m){
    char newstr[200];
    int i;
    int j=0; // work as a iterator which will add the chars to new str
    // i will be count to hit that number of index which from we will start slicing

    for(i = n; i<=m; i++, j++){
        newstr[j] = str[i];
    }
    newstr[j] = '\0';
    puts(newstr);
}

int main(){

    // Slice a string from index 3 to 6

    char str[100] = "helloworld";
    slice(str,3,6);

return 0;
}