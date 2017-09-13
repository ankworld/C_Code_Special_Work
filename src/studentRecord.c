#include <stdio.h>
#define MAX_LENGTH 80

int main(){
    int classSize;
    printf("----==== Welcome To Student Record Programe ====----\n\n");
    printf("This is first time to use this programe, right?\n\n");
    printf("Please enter your class size : ");
    scanf("%d", &classSize);

    char stdName[classSize][MAX_LENGTH];
    float stdGrade[classSize][2];
        printf("Initialization complete....Let's begin...\n\n");
        printf("How to input std record :-> Std 1 : <StdName> <StdGrade1> <StdGrade2>\n");
    int i = 0;

    while(i < classSize){
        printf("STD %d : ", i+1);
        scanf("%s %f %f", stdName[i], &stdGrade[i][0], &stdGrade[i][1]);

        i++;
    }
    //Display Name -> GPA
    int j;
    for(j = 0; j < classSize; j++)
    {
    printf("%s -> %.2f\n", stdName[j], (stdGrade[j][0] + stdGrade[j][1])/2);
    }
    return 0;
}
