#include <stdio.h>
#include <stdlib.h>

int main() {
    int minutes[7] = {0};
    int choice, day, total, highest;
    FILE *fp;
    char confirm;

    while (1) {
        printf("\n--- Music Listening Logger ---\n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Report\n");
        printf("3. Reset Data\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            fp = fopen("music_log.txt", "w");

            for (day = 0; day < 7; day++) {
                printf("Day %d Minutes: ", day + 1);
                scanf("%d", &minutes[day]);
                fprintf(fp, "%d\n", minutes[day]);
            }

            fclose(fp);
            printf("Data Saved Successfully!\n");
            break;

        case 2:
            fp = fopen("music_log.txt", "r");

            total = 0;
            highest = 0;

            for (day = 0; day < 7; day++) {
                fscanf(fp, "%d", &minutes[day]);
                total += minutes[day];

                if (minutes[day] > highest)
                    highest = minutes[day];
            }

            fclose(fp);

            printf("\nWeekly Report\n");
            printf("Total Minutes = %d\n", total);
            printf("Average Minutes = %.2f\n", total / 7.0);
            printf("Highest Minutes = %d\n", highest);
            break;

        case 3:
            printf("Are you sure? (Y/N): ");
            scanf(" %c", &confirm);

            if (confirm == 'Y' || confirm == 'y') {

                for (day = 0; day < 7; day++)
                    minutes[day] = 0;

                fp = fopen("music_log.txt", "w");
                fclose(fp);

                printf("Data Reset Successfully!\n");
            }
            break;
        