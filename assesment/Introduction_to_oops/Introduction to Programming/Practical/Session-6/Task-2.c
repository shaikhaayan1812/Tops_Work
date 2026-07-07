#include <stdio.h>

int main() {
    int choice;

    while(1) {
        printf("\n1. View Teams\n2. Add Team\n3. Exit\n");
        scanf("%d", &choice);

        if(choice == 1)
            printf("MI, CSK, RCB\n");
        else if(choice == 2)
            printf("New Team Added!\n");
        else if(choice == 3)
            break;
    }

    return 0;
}