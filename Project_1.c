#include<stdio.h>
#include<string.h>
struct student {
    char name[200];
    char department[100];
    int batch;
    int id;
};
struct student CSE[5000];
int studentCount = 0;



int main(){

    char username[100];
    char password[100];

    printf("\n****WELLCOME TO THE ADMIN PAGE OF LEADING UNIVERSITY****\n");
    printf("Enter your username:");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';

    printf("Enter your password:");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0'; 

    int checkUser = strcmp(username, "admin");
    int checkPass = strcmp(password, "1234");

    if(checkPass == 0 && checkUser == 0) {
        printf("Congo! Login Successfull :)\n");
        // menu();
    } else{
        printf("Invaild login ;) \n");
    }
return 0;
}