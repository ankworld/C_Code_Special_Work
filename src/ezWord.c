#include <stdio.h>
#include <stdlib.h>
int main () {
    int account;
    char name[30];
    float balance;
    FILE *fp;
    if((fp = fopen("clients.dat", "w")) == NULL) {
        printf("File cound not be opened\n");
        exit(1);
    } else {
        printf("Enter the account, name, and balance.\n");
        printf("Enter EOF to end input.\n");
        printf("? ");
        scanf("%d%s%f", &account, name, &balance);

        while(!feof(stdin)) {
            fprintf(fp, "%d %s %.2f\n", account, name, balance);
            printf("? ");
            scanf("%d%s%f", &account, name, &balance);
        }
        fclose(fp);
    }
    printf("\n");
    if((fp = fopen("clients.dat", "r")) == NULL) {
        printf("File cound not be opened\n");
        exit(1);
    } else {
        printf("%-10s%-13s%s\n", "Account", "Name", "Balance");
        fscanf(fp, "%d%s%f", &account, name, &balance);
        while(!feof(fp)) {
            printf("%-10d%-13s%7.2f\n", account, name, balance);
            fscanf(fp, "%d%s%f", &account, name, &balance);
        }
        fclose(fp);
    }
    return 0;
}
