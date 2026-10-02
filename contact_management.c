#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[20];
    char email[50];
};

int main()
{
    struct Contact contact;
    FILE *file;

    printf("===== Contact Management Using File Handling =====\n");

    file = fopen("contacts.txt", "a");

    if (file == NULL)
    {
        printf("Unable to open file!\n");
        return 1;
    }

    printf("Enter Contact Name: ");
    scanf(" %49[^\n]", contact.name);

    printf("Enter Phone Number: ");
    scanf(" %19s", contact.phone);

    printf("Enter Email: ");
    scanf(" %49s", contact.email);

    fprintf(file, "Name: %s\n", contact.name);
    fprintf(file, "Phone: %s\n", contact.phone);
    fprintf(file, "Email: %s\n", contact.email);
    fprintf(file, "-------------------------\n");

    fclose(file);

    printf("\nContact saved successfully!\n");
    printf("Data is stored in contacts.txt\n");

    return 0;
}
