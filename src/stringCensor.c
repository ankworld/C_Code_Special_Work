#include <stdio.h>

int main() {

    char name[30];
    printf("Name : ");
    scanf("%s", name);
    int i = 0;
    for (i = 2; name[i] != '\0'; i+=3) {
        name[i] = '*';
        name[i-1] = '*';
        if ((name[i+1] == '\0') || (name[i+2] == '\0') || (name[i+3] == '\0')) break;
    }
    printf("New : %s", name);

}
