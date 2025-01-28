#include <stdio.h>
#include <string.h>
struct student
{
    char name[200];
    char department[100];
    int batch;
    int id;
};
#define max_Student 5000
struct student CSE[max_Student];
int studentCount = 0;

void menu()
{
    int choice;
    do
    {
        printf("Welcome to the menu of Leading University Student Portal\n");
        printf(" 1. Add Student\n");
        printf(" 2. Display All Student\n");
        printf(" 3. Search Student\n");
        printf(" 4. Delete Student\n");
        printf(" 5. Logout\n");

        printf("%d", &(choice));

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudent();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            deleteStudent();
            break;
        case 5:
            printf("logging Out. Have a good day\n");
            break;
        default:
            printf("Invalid Choice. Try again....\n");
        }
    }while (choice != 5);
}

void addStudent(){
    if(studentCount >= max_Student){
        printf("Student limit Crossed\n");
        return;
    }
    else{
        printf("Enter Student Name: ");
        fgets(CSE[studentCount].name, sizeof(CSE[studentCount].name), stdin);

        CSE[studentCount].name[strcspn(CSE[studentCount].name, "\n")] = '\0';

        printf("Enter student id: ");
        scanf("%d", &CSE[studentCount].id);

        printf("Enter batch: ");
        scanf("%d", &CSE[studentCount].batch);

        printf("Student Added Successfully! Welcome %s to LU \n", CSE[studentCount].name);
        studentCount++;
    }
}
    int main()
    {

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

        if (checkPass == 0 && checkUser == 0)
        {
            printf("Congo! Login Successfull :)\n");
            menu();
        }
        else
        {
            printf("Invaild login ;) \n");
        }
        return 0;
    }