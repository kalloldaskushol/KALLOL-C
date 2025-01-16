#include<stdio.h>
int length(char arr[]){
    int count=0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count-1;
}

int count_k(char arr[]){
    int count=0;
    for(int i=0; arr[i]!='\0'; i++){
        if(arr[i]=='k') count++;
    }
    return count;
}
int main(){

    char name[100];
    fgets(name, 100, stdin);
    printf("Length is %d\n", length(name));
    printf("count of 'k' is %d\n", count_k(name));

return 0;
}