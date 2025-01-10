#include <stdio.h>
#include <string.h>

#define PASSWORD "passw0rd"

void print_flag() {
    FILE *flag_file = fopen("flag.txt", "r");
    if (flag_file == NULL) {
        printf("flag.txt not found\n");
        return;
    }
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), flag_file) != NULL) {
        printf("%s", buffer);
    }

    fclose(flag_file);
}

int main() {
    printf(">>        * * * Login * * *        <<\n");

    char user_password[32];

    // Hum, I hope users never find a way of changing the value of isAuth, otherwise, this authentication is doomed.
    int isAuth = 0;

    printf("Enter the password: ");
    scanf("%64[^\n]", user_password);

    if (strcmp(user_password, PASSWORD) == 0) {
        isAuth = 1;
    }

    if (isAuth) {
        printf("The password is right!\n");
        print_flag();
    } else {
        printf("Wrong password.\n");
    }

    printf(">>        * * *  Bye  * * *        <<\n");
    return 0;
}