#include <stdio.h>
#include <string.h>

int main(){
    int menu;
    char nstr[50];
    int nint;
    double ndouble;

    struct book{
        char title[50];
        char authon[50];
        char book_id;
        double price;
    };

    struct book book1 = {
            "The C Programming Language",
            "Dennis M. Ritchie",
            792,
            1920

    };

        printf("title : %s\n",book1.title);
        printf("authon : %s\n",book1.authon);
        printf("book_id : %d\n",book1.book_id);
        printf("price : %lf\n",book1.price);

        printf("\n");

        printf("1 title\n");
        printf("2 authon\n");
        printf("3 book_id\n");
        printf("4 price\n");
        scanf("%d",&menu);

        switch(menu){
            case 1:scanf("%s",nstr);
                strcpy(book1.title,nstr);
                break;
            case 2:scanf("%s",nstr);
                strcpy(book1.authon,nstr);
                break;
            case 3:scanf("%d",&nint);
                book1.book_id = nint;
                break;
            case 4:scanf("%lf",&ndouble);
                book1.price = ndouble;
                break;

        }
        printf("title : %s\n",book1.title);
        printf("authon : %s\n",book1.authon);
        printf("book_id : %d\n",book1.book_id);
        printf("price : %lf\n",book1.price);

}
