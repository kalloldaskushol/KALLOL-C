#include <stdio.h>

int main() {
    char name[51];
    

    fgets(name, sizeof(name), stdin);

    for(int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
    }

    int days_left = 337;

    printf("%s, keep pushing! Only %d days to go for a better 2025!\n", name, days_left);
    
    return 0;
}
