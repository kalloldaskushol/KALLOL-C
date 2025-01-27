#include <stdio.h>
typedef struct address
{
    int house_no;
    int block;
    char city[100];
    char state[100];
} add;
int main()
{

    struct address add[5];
    printf("Enter address of the student:");
    for (int i = 0; i < 1; i++)
    {
        scanf("%d", &add[i].house_no);
        scanf("%d", &add[i].block);
        scanf("%s", add[i].state);
        scanf("%s", add[i].city);
        printf("\nhouse no %d\n", add[i].house_no);
        printf("block no %d\n", add[i].block);
        printf("city no %s\n", add[i].city);
        printf("state no %s\n", add[i].state);
    }
    return 0;
}