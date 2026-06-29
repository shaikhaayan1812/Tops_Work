#include <stdio.h>      // Input and output functions ke liye

char task[5][50];       // Global array (5 tasks store karega)
char status[5][10];     // Global status array (DONE store karega)

// Function to mark a task as DONE
void markTaskDone(int index)
{
    status[index][0] = 'D';
    status[index][1] = 'O';
    status[index][2] = 'N';
    status[index][3] = 'E';
    status[index][4] = '\0';      // String ka end
}

int main()              // Program yahan se start hota hai
{
    int i, choice;      // Loop variable aur task number

    printf("Enter 5 Tasks:\n");   // User ko message

    // User se 5 tasks input lena
    for(i = 0; i < 5; i++)
    {
        printf("Task %d: ", i + 1);
        scanf(" %[^\n]", task[i]);   // Task input lena

        status[i][0] = '\0';         // Default status empty rakhna
    }

    // User se task number lena
    printf("\nEnter Task Number to Mark as DONE (1-5): ");
    scanf("%d", &choice);

    markTaskDone(choice - 1);        // Selected task ko DONE mark karna

    printf("\nUpdated Task List:\n");    // Updated list print karna

    // Sabhi tasks print karna
    for(i = 0; i < 5; i++)
    {
        printf("%d. %s", i + 1, task[i]);

        if(status[i][0] != '\0')     // Agar status DONE hai
        {
            printf(" - %s", status[i]);
        }

        printf("\n");
    }

    return 0;                        // Program successfully end
}
