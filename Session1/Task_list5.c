//1

#include <stdio.h>      // Input and output functions ke liye

char task[5][50];       // Global array (5 tasks, har task me 50 characters)

int main()              // Program yahan se start hota hai
{
    int i;              // Loop variable

    printf("Enter 5 Tasks:\n");   // User ko message

    for(i = 0; i < 5; i++)        // 5 baar loop chalega
    {
        printf("Task %d: ", i + 1);
        scanf(" %[^\n]", task[i]); // User se task input lena
    }

    printf("\nTask List:\n");     // Heading print

    for(i = 0; i < 5; i++)        // Sabhi tasks print karna
    {
        printf("%d. %s\n", i + 1, task[i]);
    }

    return 0;                     // Program successfully end
}
