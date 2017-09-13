#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define version 1

typedef struct
{
    int day;
    char month[20];
    int year;
} Date;

typedef struct
{
    char id[10];
    char fname[30];
    char lname[50];
    Date bDate;
    char sex;
} Student_Record;

void writeSession()
{
    char fileName[255];
    printf("File name ?> ");
    scanf("%s", fileName);

    FILE *fp;
    Student_Record std;
    if ((fp = fopen(fileName, "r")) == NULL)
    {
        //fclose(fp);
        fp = fopen(fileName, "w");
        printf("[ID] [Fname] [Lname] [BDay] [BMonth] [BYear] [Sex(M/F)]\n");
        printf("Enter Student Infomation \n");
        printf("Enter EOF to end input.\n");
        printf("?> ");
        scanf("%s %s %s %d %s %d %c",
              std.id, std.fname, std.lname, &std.bDate.day, std.bDate.month, &std.bDate.year,
              &std.sex);
        while(!feof(stdin))
        {
            fprintf(fp, "%s %s %s %d %s %d %c\n",
                    std.id, std.fname, std.lname, std.bDate.day, std.bDate.month, std.bDate.year,
                    std.sex);
            printf("?> ");
            scanf("%s %s %s %d %s %d %c",
                  std.id, std.fname, std.lname, &std.bDate.day, std.bDate.month, &std.bDate.year,
                  &std.sex);
        }
        fclose(fp);
    }
    else
    {
        printf("File Exist! Append or Overwrite[A/O] ?> ");
        char c;
        scanf(" %c", &c);
        switch(c)
        {
        case 'A' :
        case 'a' :
            fp = fopen(fileName, "a+");
            printf("[ID] [Fname] [Lname] [BDay] [BMonth] [BYear] [Sex(M/F)\n");
            printf("Enter Student Infomation \n");
            printf("Enter EOF to end input.\n");
            printf("?> ");
            scanf("%s %s %s %d %s %d %c",
                  std.id, std.fname, std.lname, &std.bDate.day, std.bDate.month, &std.bDate.year,
                  &std.sex);
            while(!feof(stdin))
            {
                fprintf(fp, "%s %s %s %d %s %d %c\n",
                        std.id, std.fname, std.lname, std.bDate.day, std.bDate.month, std.bDate.year,
                        std.sex);
                printf("?> ");
                scanf("%s %s %s %d %s %d %c",
                      std.id, std.fname, std.lname, &std.bDate.day, std.bDate.month, &std.bDate.year,
                      &std.sex);
            }
            fclose(fp);
            break;
        case 'O' :
        case 'o' :
            fp = fopen(fileName, "w");
            printf("[ID] [Fname] [Lname] [BDay] [BMonth] [BYear] [Sex(M/F)]\n");
            printf("Enter Student Infomation \n");
            printf("Enter EOF to end input.\n");
            printf("?> ");
            scanf("%s %s %s %d %s %d %c",
                  std.id, std.fname, std.lname, &std.bDate.day, std.bDate.month, &std.bDate.year,
                  &std.sex);
            while(!feof(stdin))
            {
                fprintf(fp, "%s %s %s %d %s %d %c\n",
                        std.id, std.fname, std.lname, std.bDate.day, std.bDate.month, std.bDate.year,
                        std.sex);
                printf("?> ");
                scanf("%s %s %s %d %s %d %c",
                      std.id, std.fname, std.lname, &std.bDate.day, std.bDate.month, &std.bDate.year,
                      &std.sex);
            }
            fclose(fp);
            break;
        default :
            printf("File Close\n");
            fclose(fp);
        }
    }
}

void readSession()
{
    char fileName[255];
    printf("File name ?> ");
    scanf("%s", fileName);

    FILE *fp;
    Student_Record std;
    if ((fp = fopen(fileName, "r")) == NULL)
    {
        printf("File not Found\n");
    }
    else
    {
        printf("\n\n===============================================================================\n\n");
        printf("%-10s%-15s%-20s%15s%10s\n","ID","Firstname", "Lastname", "BirthDate", "Sex");
        fscanf(fp, "%s%s%s%d%s%d %c",
                   std.id, std.fname, std.lname, &std.bDate.day, std.bDate.month, &std.bDate.year,
                   &std.sex);
        while(!feof(fp))
        {
            printf("%-10s%-15s%-20s%2d%10s%8d %3c\n",
                   std.id, std.fname, std.lname, std.bDate.day, std.bDate.month, std.bDate.year,
                   std.sex);
            fscanf(fp, "%s%s%s%d%s%d %c",
                   std.id, std.fname, std.lname, &std.bDate.day, std.bDate.month, &std.bDate.year,
                   &std.sex);
        }
        fclose(fp);
        printf("\n\n===============================================================================\n\n");
    }
}

void showMode()
{
    printf("< Mode List >\n");
    printf("1. write\n");
    printf("2. read\n");
    printf("3. exit\n\n");
}

int main ()
{
    printf("=====================================\n\n");
    printf("Welcome to Student Recoder Version %d\n\n", version);
    printf("=====================================\n\n");
    while(1)
    {
        showMode();

        printf("Enter You Command [1-3] ?> ");
        int mode = 3;
        scanf("%d", &mode);

        switch(mode)
        {
        case 1 :
            writeSession();
            break;
        case 2 :
            readSession();
            break;
        case 3 :
            exit(1);
            break;
        default :
            printf("Error\n");
        }
    }
}
