//3 tasks add karo.
//Unme se 1 task ko DONE mark karo.
//Phir sabhi tasks ki updated list aur unka status print karo.
// mene yha pe teen task print kiye jo ek done huaa to baki sab not done huee
//Examplae agr ye teen 3 task add kiya to 
//1. Study
//2. Buy Milk
//3. Exercise

//Task List ye hogi
//1. Study - NOT DONE
//2. Buy Milk - DONE
//3. Exercise - NOT DONE
#include <stdio.h>
#include <string.h>

#define MAX 3          // Maximum 3 tasks

// Task Structure
struct Task
{
    char title[50];    // Task ka naam
    int isDone;        // 0 = NOT DONE, 1 = DONE
};

// TaskList Structure
struct TaskList
{
    struct Task tasks[MAX];   // Task array
    int count;                // Total tasks
};

// Task add karne ka function
void addTask(struct TaskList *list, char title[])
{
    strcpy(list->tasks[list->count].title, title);
    list->tasks[list->count].isDone = 0;
    list->count++;
}

// Task ko DONE mark karne ka function
void markTaskDone(struct TaskList *list, int index)
{
    list->tasks[index].isDone = 1;
}

// Sabhi tasks display karne ka function
void showTasks(struct TaskList list)
{
    int i;

    printf("\nTask List:\n");

    for(i = 0; i < list.count; i++)
    {
        printf("%d. %s - ", i + 1, list.tasks[i].title);

        if(list.tasks[i].isDone == 1)
        {
            printf("DONE\n");
        }
        else
        {
            printf("NOT DONE\n");
        }
    }
}

// Main function
int main()
{
    struct TaskList list;

    list.count = 0;      // Starting me koi task nahi hai

    // 3 Tasks add karna
    addTask(&list, "Study");
    addTask(&list, "Buy Milk");
    addTask(&list, "Exercise");

    // 2nd Task ko DONE mark karna
    markTaskDone(&list, 1);

    // Sabhi tasks display karna
    showTasks(list);

    return 0;
}
