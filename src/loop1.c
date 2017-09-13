#include <stdio.h>

int main(){
    int stdNum;
    float weight;
    float totalweight = 0;
    int i;
    float average;
    printf("Enter number of student : ");
    scanf("%d", &stdNum);

    for(i=0; i<stdNum; i++){
        printf("Enter weight %d std : ", i+1);
        scanf("%f", &weight);

        if((weight > 200)||(weight < 0)){
            continue;
        }

        totalweight = totalweight + weight;
    }
        average = totalweight / stdNum;
        printf("average : %.2f", average);

        return 0;
}
