#include <stdio.h>

int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
float Div(int a, int b);
int Pow(int base, int expo);
int Protagoras_A(int a, int b);
int Protagoras_B(int a, int b);
int Protagoras_C(int a, int b);

int main ()
{
    int a;
    a = Pow(8, 3);
    printf("%d\n", a);
    return 0;
}

int Add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int Sub(int a, int b)
{
    int c;
    c = a - b;
    return c;
}

int Mul(int a, int b)
{
    int c;
    c = a * b;
    return c;
}

float Div(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    else
    {
        float c;
        c = a / b;
        return c;
    }
}

// Pow (8, 3)
// Pow (8, 7)
int Pow(int base, int expo) {
    int c = 1;
    int i;
    for (i = 0; i < expo; i++) {
        c = c * base;
    }
    return c;
}










