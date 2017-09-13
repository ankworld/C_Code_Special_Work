#include <stdio.h>
#include <string.h>

int main ()
{

    char str1[100], str2[100],temp[100], newStr[100];

    printf("Enter str1 : ");
    scanf("%s", str1);
    printf("Enter str2 : ");
    scanf("%s", str2);

    if (strlen(str1) > strlen(str2))
    {
        strcpy(temp, str2);
        strcat(str2, str1);
        strcpy(newStr, str2);
        strcpy(str2, temp);
    }
    else
    {
        strcpy(temp, str1);
        strcat(str1, str2);
        strcpy(newStr, str1);
        strcpy(str1, temp);
    }

    printf("Str1 : %s\nStr2 : %s\nNewStr : %s", str1, str2, newStr);

    return 0;
}
