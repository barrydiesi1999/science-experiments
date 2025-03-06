#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i;
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    for (i = 0; i < strlen(name); i++) {
        if (name[i] == 'A') {
            printf("You entered a vowel!\n");
        } else {
            printf("You entered a consonant.\n");
        }
    }
    return 0;
}
