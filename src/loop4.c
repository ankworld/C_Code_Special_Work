#include <stdio.h>

int main(){

    char name[30];
    int menu;

    scanf("%s", name);

    printf("\nMenu\n");
    printf("1. Normal text\n");
    printf("2. Vertical text\n");
    printf("3. ASCII text\n");
    printf("4. Quit\n");

    do {

        printf("Enter your choice : ");
        scanf("%d", &menu);
        int i = 0;
        char ch;

        switch(menu){
            case 1 : printf("%s\n", name);break;
            case 2 :
                for(i = 0; name[i] != '\0'; i++){
                    printf("%c\n",name[i]);
                }
            break;
            case 3 :
                for (i = 0; name[i] != '\0'; i++) {
                    printf("%d ", name[i]);

                }
            break;
            case 4 : break;
        }

    } while(menu != 4);

}
