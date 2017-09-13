#include <stdio.h>
#include <string.h>

int main() {

    FILE *fp;
    char fileName[80];
    int i;
    for (i = 0; i < 100; i++) {
        strcpy(fileName, "FK");
        fileName[2] = 'A' + i;
        fileName[3] = '\0';
        fp = fopen(fileName, "w");
        fclose(fp);
    }
}
