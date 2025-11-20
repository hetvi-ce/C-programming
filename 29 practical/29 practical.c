#include <stdio.h>
#include <string.h>

struct Coach {
    char name[50];
    int age;
    int experience;
};

struct Team {
    char teamName[50];
    char sportType[30];
    struct Coach coach;
};

int main() {
    struct Team teams[20];
    int choice, count = 0;
    printf("ID No: 25CE105\n\n");
    while (1) {
        printf("\n--- Sports Team Management System ---\n");
        printf("1. Add New Team\n");
        printf("2. Search Team\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                if (count >= 20) {
                    printf("Storage full! Cannot add more teams.\n");
                    break;
                }

                printf("\nEnter Team Name: ");
                fgets(teams[count].teamName, sizeof(teams[count].teamName), stdin);

                printf("Enter Sport Type: ");
                fgets(teams[count].sportType, sizeof(teams[count].sportType), stdin);

                printf("Enter Coach Name: ");
                fgets(teams[count].coach.name, sizeof(teams[count].coach.name), stdin);

                printf("Enter Coach Age: ");
                scanf("%d", &teams[count].coach.age);

                printf("Enter Coach Experience (years): ");
                scanf("%d", &teams[count].coach.experience);
                getchar();

                printf("Team added successfully!\n");
                count++;
                break;

            case 2: {
                char searchName[50];
                int found = 0;

                printf("\nEnter Team Name to Search: ");
                fgets(searchName, sizeof(searchName), stdin);

                for (int i = 0; i < count; i++) {
                    if (strcmp(searchName, teams[i].teamName) == 0) {
                        found = 1;
                        printf("\n--- Team Found ---\n");
                        printf("Team Name: %s", teams[i].teamName);
                        printf("Sport Type: %s", teams[i].sportType);
                        printf("Coach Name: %s", teams[i].coach.name);
                        printf("Coach Age: %d\n", teams[i].coach.age);
                        printf("Coach Experience: %d years\n", teams[i].coach.experience);
                        break;
                    }
                }
                if (found==0)
                    printf("Team not found!\n");
                break;
            }

            case 3:
                if (count == 0) {
                    printf("\nNo teams available to display.\n");
                }
                else {
                    printf("\n--- All Teams ---\n");
                    for (int i = 0; i < count; i++) {
                        printf("\nTeam %d:\n", i + 1);
                        printf("Team Name: %s", teams[i].teamName);
                        printf("Sport Type: %s", teams[i].sportType);
                        printf("Coach Name: %s", teams[i].coach.name);
                        printf("Coach Age: %d\n", teams[i].coach.age);
                        printf("Coach Experience: %d years\n", teams[i].coach.experience);
                    }
                }
                break;

            case 4:
                printf("Exiting.....\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
