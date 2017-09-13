#include <stdio.h>

void Func1 ();
void Func2 (int a, int b);
int Func3();
int Func4(int a, int b);

int main () {
    Func1();
    Func2(5, 10);
    int a;
    a = Func3();
    printf("%d\n", a);
    a = Func4(7, 10);
    printf("%d\n", a);
    return 0;
}

void Func1 () {
    printf("HelloWorld\n");
}

void Func2(int a, int b) {
    printf("%d\n", a + b);
}

int Func3() {
    return 15;
}

int Func4(int a, int b) {
    int c;
    c = a + b;
    return c;
}
