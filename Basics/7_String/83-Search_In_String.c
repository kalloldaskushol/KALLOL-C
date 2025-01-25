#include <stdio.h>
void search(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("Found!!!");
            return;
        }
    }
    printf("Not Found");
}
int main()
{

    char name[] = "Kallol Das Kushol";
    char ch = 'z';
    search(name, ch);

    return 0;
}