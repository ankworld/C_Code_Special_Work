#include <stdio.h>

int main(){

    printf("*********This is program from lab 7.3.*********\n");
    printf("*********                             *********\n");
    printf("*********This is program from lab 7.3.*********\n");

    float weight[10];
    float totalweight = 0;
    int i;
    float average;

    for(i=0; i<10; i++){
        printf("Enter weight %d std : ", i+1);
        scanf("%f", &weight[i]);

        totalweight = totalweight + weight[i];
    }
        average = totalweight / 10;
        printf("average : %.2f\n", average);

        printf("\n");

    printf("THIS IS POWER OF ARRAY!\n");
    printf("Now!, We can show all input\n");

     for(i=0; i<10; i++){
        printf("%d STD weight : %.2f\n", i,weight[i]);


     }
}
