#include <stdio.h>

int main(){

   int i;
    char name[80];
    printf("*********This is program for censor your name*********\n\n");
    printf("Enter you name here : ");
    scanf("%s", name);

    //for (i = 0; name[i] != '\0'; i += 3){
      //  name[i+1] = '*';
        //name[i+2] = '*';
    //}
    for (i = 2; name[i] != '\0'; i += 3){
        name[i] = '*';
        name[i-1] = '*';
        if((name[i+1] == '\0') || (name[i+2] == '\0') || (name[i+3] == '\0'))break;
    }
    printf("Censor complete!!!!\n");
    printf("This is your name : %s", name);
}
