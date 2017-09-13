#include <stdio.h>

void Hello();
void printX2(int x);
int _5A5();
int Add(int a, int b);

int main () {
    Hello();
    printX2(6);
    int a = _5A5(); // int a = 10;
    printf("%d\n", a);
    int sum = Add(10, 20);
    printf("%d\n", sum);
    return 0;
}

void Hello ()
{
    printf("Hello\n");
}

void printX2(int X) {
    printf("Area : %d\n", X * X);
}

int _5A5 () {
    return 5+5;
}

int Add(int a, int b) {
    return a + b;
}

