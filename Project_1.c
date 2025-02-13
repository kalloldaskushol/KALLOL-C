#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int batch;
    int id;
};
#define max_Student 5000
struct student CSE[max_Student];
int studentCount = 0;

void addStudent(){
    if(studentCount >= max_Student){
        printf("Student limit Crossed\n");
        printf("****RETURNING TO THE ADMIN PORTAL****\n\n");
        return;
    }
    else{
        
            printf("Enter Student Name:");
            fgets(CSE[studentCount].name, sizeof(CSE[studentCount].name), stdin);
            CSE[studentCount].name[strcspn(CSE[studentCount].name, "\n")] = '\0';
            printf("Enter student id: ");
            scanf("%d", &CSE[studentCount].id);
            
            printf("Enter batch: ");
            scanf("%d", &CSE[studentCount].batch);
            getchar();
            printf("Student Added Successfully! Welcome %s to LU <3\n", CSE[studentCount].name);   
            studentCount++;
        printf("****RETURNING TO THE ADMIN PORTAL****\n\n");
    }

}


void displayStudent(){
        if(studentCount == 0 ){
            printf("No record found\n");
            printf("****RETURNING TO THE ADMIN PORTAL****\n\n");
            return;
        }
        else {
            printf("\nStudent Records: \n");
            for(int i=0; i<studentCount; i++){
                printf("Student number: %d\n", (i+1));
                printf("Name: %s \n", CSE[i].name);
                printf("ID: %d \n", CSE[i].id);
                printf("Batch: %d \n", CSE[i].batch);
            }
        printf("****RETURNING TO THE ADMIN PORTAL****\n\n");
        }
    }

    void searchStudent(){
        int id;
        printf("Enter the id of the student:");
        scanf("%d", &id);
        getchar();
        for(int i=0; i<studentCount; i++){
            if(CSE[i].id == id ){
                printf("Student FOUND!!!!!\n");
                printf("Name: %s \n", CSE[i].name);
                printf("ID: %d \n", CSE[i].id);
                printf("Batch: %d \n", CSE[i].batch);
                printf("****RETURNING TO THE ADMIN PORTAL****\n\n");
                return;
            }
            else{
                printf("Student Not Found\n");
                printf("****RETURNING TO THE ADMIN PORTAL****\n\n");

            }
        }
    }
    void deleteStudent(){
        int dlt;
        printf("Enter the id of the student you want to delete:");
        scanf("%d", &dlt);
        for(int i=0; i<studentCount; i++){
            if(CSE[i].id == dlt){
                for(int j=dlt; j<studentCount; j++){
                    CSE[j].id = CSE[j+1].id;
                }
                printf("Delete successfull!!!!\n");
                studentCount--;
                printf("****RETURNING TO THE ADMIN PORTAL****\n\n");
            }else{
                printf("Student not found :( \n");
                printf("****RETURNING TO THE ADMIN PORTAL****\n\n");
            }

        }
    }
void menu()
{
    int choice;
    do
    {
        printf("\n****Welcome to the menu of Leading University Student Portal****\n");
        printf(" 1. Add Student\n");
        printf(" 2. Display All Student\n");
        printf(" 3. Search Student\n");
        printf(" 4. Delete Student\n");
        printf(" 5. Logout\n");

        scanf("%d", &choice);
        getchar();

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
            printf("\nCongo! Login Successfull :)\n");
            menu();
        }
        else
        {
            printf("\nInvaild login ;) \n");
        }
        return 0;
    }





















// seacrh by name
// char name[100];
// fgets(name, 100, stdin);
// name[strcspn(name, "\n")] = '\0';

        // if(strcmp(CSE[i].name, name)==0)





// search for n
        // int stdnum;
        // scanf("%d", &stdnum);
        // getchar();
        // for(int i=0;i<stdnum; i++){
