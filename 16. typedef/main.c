#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

int main()
{

    User user1 = {"Jaume", "1234", 1};
    User user2;

    strcpy(user2.name, "Anna");
    strcpy(user2.password, "9876");
    user2.id = 4;

    printf("%s\n", user1.name);
    printf("%s\n", user2.name);
    printf("%s\n", user1.password);
    printf("%s\n", user2.password);
    printf("%d\n", user1.id);
    printf("%d\n", user2.id);

    return 0;
}