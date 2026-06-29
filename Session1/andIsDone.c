#include <stdio.h>
#include <string.h>      // strcpy() function ke liye

// Structure (Class ki jagah C me struct use hota hai)
struct Task
{
    char title[50];      // Task ka naam
    int isDone;          // 0 = NOT DONE, 1 = DONE
};

// Task ko DONE mark karne ka function
void markDone(struct Task *t)
{
    t->isDone = 1;
}

// Task aur uska status display karne ka function
void display(struct Task t)
{
    printf("Task : %s\n", t.title);

    if(t.isDone == 1)
    {
        printf("Status : DONE\n");
    }
    else
    {
        printf("Status : NOT DONE\n");
    }
}

int main()      // Program yahan se start hota hai
{
    struct Task t1;      // Structure variable

    strcpy(t1.title, "Complete Assignment");   // Task ka naam
    t1.isDone = 0;       // Default status NOT DONE

    display(t1);         // Pehle status dikhana

    markDone(&t1);       // Task ko DONE mark karna

    printf("\n");

    display(t1);         // Updated status dikhana

    return 0;            // Program successfully end

