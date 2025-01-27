#include<stdio.h>
// Make a structure to store Bank Account information of a coustomer of ABC Bank. Also make an alias for it.

typedef struct BankAccount{
    int accNum;
    char name[100];
} acc;
int main(){

    acc acc1 = {100, "Kallol"};
    acc acc2 = {101, "Shourav"};

    printf("Account1 details: %d, %s \n",acc1.accNum, acc1.name);
    printf("Account2 details: %d, %s \n",acc2.accNum, acc2.name);
return 0;
}