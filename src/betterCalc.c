#include <stdio.h>
#include <math.h>

void showMainMenu()
{
    printf("Program Mode\n");
    printf("1. + - * /\n");
    printf("2. Power\n");
    printf("3. Square Root\n");
    printf("4. Absolute\n");
    printf("5. X^10 + Y^10 = ?\n\n");
    printf("0. Exit\n");
    printf("Choose Menu : ");
}

void showMenu1()
{
    printf("Welcome to + - * / MODE\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("0. Back\n");
    printf("Choose Menu : ");
}

int main ()
{
    int menu;
    do
    {
        showMainMenu();
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            int menu1;
            float N1,N2, sum;
            do
            {
                int loop = 1;
                showMenu1();
                scanf("%d", &menu1);
                printf("NUM 1 :");
                scanf("%f", &N1);
                printf("NUM 2 :");
                scanf("%f", &N2);
                switch (menu1)
                {
                case 1:
                    sum = N1 + N2;
                    break;
                case 2:
                    sum = N1 - N2;
                    break;
                case 3:
                    sum = N1 * N2;
                    break;
                case 4:
                    sum = N1 / N2;
                    break;
                case 0:
                    loop = 0;
                    break;
                }
            }
            while(loop);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 0:
            break;
        }
    }
    while (1);
}
