#include <stdio.h>

int main () {
    int a = 10;
    int b = 20;

    showMenu();
    scanf("%d", )

}

void showMenu() {
    printf("Menu\n");
    printf("Press 1 : To Swap\nPress 2 : To Quit\n");
}

int getMenu(int a) {
    printf("Your Command : ");
}

void PTswap (int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap (int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After Swap : a = %d\tb = %d\n",a ,b);
}
