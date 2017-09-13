#include <stdio.h>

int main () {

    FILE *fp;
    char readStr[80];
    fp = fopen("abc.txt", "w");
        fprintf(fp, "Monitor or File");
    fclose(fp);

    fp = fopen("abc.txt", "r");
//        fscanf(fp, "%s", readStr);
        fgets(readStr, 128, fp);
    fclose(fp);
    remove("abc.txt");
    fprintf(stdout, "%s", readStr);

}
