#include <stdio.h>
#include <stdlib.h>

double d[10] = {
    10.23, 19.67, 1000.23, 12.9, 0.879,
    11.45, 75.34, 0.0, 1.01, 875.587
};

int main () {
    FILE *fp;
    int i;
    if((fp = fopen("myfile", "wb")) == NULL) { // OpenFile
        printf("Cannot open file\n");
        exit(1);
    }
    if(!fwrite(&d, sizeof(double), 10, fp)) { //Write Binary File
        printf("write error");
        exit(1);
    }
    fclose(fp);

    if((fp = fopen("myfile", "rb")) == NULL) {
        printf("Cannot open file\n");
        exit(1);
    }

    for(i = 0; i < 10; i++) {
        d[i] = -1.0;
    }
    if(!fread(&d, sizeof(double), 10, fp)) { //Read Binary File
        printf("Read error");
        exit(1);
    }
    fclose(fp);

    for(i = 0; i < 10; i++) printf("%lf", d[i]);
    return 0;
}
