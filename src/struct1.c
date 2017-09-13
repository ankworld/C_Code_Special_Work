#include <stdio.h>
#include <string.h>
int main() {

    struct date {
        unsigned int day;
        char month[15];
        unsigned int year;
    };

    struct book {
        char title[50];
        char subject[30];
        char author[50];
        char publisher[50];
        char tel[11];
        unsigned int pages;
        float price;
        struct date pubDate;
    };

    struct book book1 = {
        "Guide to pro player",
        "Gaming Tutorial",
        "Anukul T.",
        "BKT co.ltd",
        "022345678",
        57,
        199.0,
        {
            2,
            "January",
            2560
        }
    };
    struct book book2;

    printf("Title : %s\n", book1.title);
    printf("Subject : %s\n", book1.subject);
    printf("Author : %s\n", book1.author);
    printf("Publisher : %s\n", book1.publisher);
    printf("Tel : %s\n", book1.tel);
    printf("Pages Number : %d\n", book1.pages);
    printf("Price : %f\n", book1.price);
    printf("PubDate : %d %s %d\n\n", book1.pubDate.day,
    book1.pubDate.month, book1.pubDate.year);

    book1.price = 570;
    strcpy(book1.title, "Guide to Trash player");
    book1.title[0] = 'g';

    printf("Title : %s\n", book1.title);
    printf("Subject : %s\n", book1.subject);
    printf("Author : %s\n", book1.author);
    printf("Publisher : %s\n", book1.publisher);
    printf("Tel : %s\n", book1.tel);
    printf("Pages Number : %d\n", book1.pages);
    printf("Price : %f\n\n", book1.price);

    printf("Enter Title : ");
    gets(&book2.title);
    printf("Enter Subject : ");
    gets(&book2.subject);
    printf("Enter Author : ");
    gets(&book2.author);
    printf("Enter Publisher : ");
    gets(&book2.publisher);
    printf("Enter Tel : ");
    gets(&book2.tel);
    printf("Enter Pages Number : ");
    scanf("%d", &book2.pages);
    printf("Enter Price : ");
    scanf("%f", &book2.price);

    printf("\n");
    printf("Title : %s\n", book2.title);
    printf("Subject : %s\n", book2.subject);
    printf("Author : %s\n", book2.author);
    printf("Publisher : %s\n", book2.publisher);
    printf("Tel : %s\n", book2.tel);
    printf("Pages Number : %d\n", book2.pages);
    printf("Price : %f\n\n", book2.price);

}
