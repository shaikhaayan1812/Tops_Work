#include <stdio.h>
#include <string.h>

int main() {
    char fullName[50];
    char username[6];

    printf("Enter Full Name: ");
    fgets(fullName, sizeof(fullName), stdin);

    if(strlen(fullName) > 5) {
        strncpy(username, fullName, 5);
        username[5] = '\0';
    } else {
        strcpy(username, fullName);
    }

    printf("Username: %s", username);

    return 0;
}