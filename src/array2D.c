#include <stdio.h>

int main () {

    int number[6][7] = {
        {0,0,1,9,13,3,4},
        {14,25,6,7,8,0,0},
        {28,0,0,0,19,0,0},
        {23,24,18,0,17,27,0},
        {21,29,16,15,12,2,10},
        {0,0,0,0,0,0,0}
    };

    char stdName[29][30] = {
        "Sasivimon","Sukanyanee","Chiraporn","AreeyaK",
        "Nattida","Sansanee","Supida","Pathamavadi",
        "Wiparat","Niramon","Parichat","AreeyaB",
        "Permrudee","Chonthicha","Atitaya","Wichuda",
        "Benjamart","Sukanya","Kanchana","Geeranan",
        "Phadungsak","Natinon","Waiyawit","Banphot",
        "Samat","Kunchai","Kaison","Kittipong",
        "Siwakorn"
    };

    int i,j,k;
    //printf
    for (i = 0; i < 6; i++) {
        for(j = 0; j < 7; j++) {
            printf("%d\t", number[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (k = 0; k < 29; k++) {
        printf("%d : %s\t",k+1, stdName[k]);
        if ((k+1) % 3 == 0) printf("\n");
    }
    printf("\n");

}
