#include <stdio.h>
#include <string.h>

int main() 
{
    char password[20];
    printf("Enter your password: ");
    scanf("%s", password);
    
    if (strcmp(password, "Secret123") == 0) {
        printf("Access granted!\n");
    } else {
        printf("Access denied. Incorrect password.\n");
    }
    
    return 0;
}
