
#include <stdio.h>
#include <string.h>

// Structure to store account details
struct BankAccount {
    int accountNumber;
    char name[50];
    float balance;
};

struct BankAccount accounts[100];
int accountCount = 0;

// Function prototypes
void createAccount();
void viewAccountDetails();
void depositMoney();
void withdrawMoney();
void deleteAccount();

int main() {
    int choice;

    while (1) {
        printf("\nBank Account Management System\n");
        printf("1. Create an Account\n");
        printf("2. View Account Details\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Delete an Account\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                viewAccountDetails();
                break;
            case 3:
                depositMoney();
                break;
            case 4:
                withdrawMoney();
                break;
            case 5:
                deleteAccount();
                break;
            case 6:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

// Function to create a new account
void createAccount() {
    if (accountCount < 100) {
        // struct BankAccount newAccount;
        // printf("Enter Account Number: ");
        // scanf("%d", &newAccount.accountNumber); // 12 '\n'
        // getchar();
        printf("Enter Name: "); 
        fgets(accounts.name, sizeof(accounts.name), stdin);//
        accounts.name[strcspn(accounts.name, "\n")] = '\0'; // Remove trailing newline
        printf("Enter Initial Balance: ");
        scanf("%f", &accounts.balance);
//0
     accounts[accountCount++] = accounts;
        printf("Account created successfully!\n");
    } else {
        printf("Account limit reached. Cannot create more accounts.\n");
    }
}

// Function to view account details
void viewAccountDetails() {
    int accountNumber;
    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Account Number: %d\n", accounts[i].accountNumber);
            printf("Name: %s\n", accounts[i].name);
            printf("Balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found!\n");
}

// Function to deposit money
void depositMoney() {
    int accountNumber;
    float amount;
    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Enter Amount to Deposit: ");
            scanf("%f", &amount);
            accounts[i].balance += amount;
            printf("Amount deposited successfully! New Balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found!\n");
}

// Function to withdraw money
void withdrawMoney() {
    int accountNumber;
    float amount;
    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Enter Amount to Withdraw: ");
            scanf("%f", &amount);
            if (accounts[i].balance >= amount) {
                accounts[i].balance -= amount;
                printf("Amount withdrawn successfully! New Balance: %.2f\n", accounts[i].balance);
            } else {
                printf("Insufficient balance!\n");
            }
            return;
        }
    }
    printf("Account not found!\n");
}

// Function to delete an account
void deleteAccount() {
    int accountNumber;
    printf("Enter Account Number to Delete: ");
    scanf("%d", &accountNumber); // 102 

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accountNumber) {            
            for (int j = i; j < accountCount - 1; j++) {  
                accounts[j] = accounts[j + 1]; 
            }
            accountCount--;
            printf("Account deleted successfully!\n");
            return;
        }
    }
    printf("Account not found!\n");

// 0182410012101003
    // 0 1 2 3 4
    // a b d e null 
}
