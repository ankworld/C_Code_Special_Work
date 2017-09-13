#include <stdio.h>

int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
float Div(int a, int b);
int Pow(int base, int expo);
int Fibonacci(int seq);

int main () {
    int i;
    for (i = 0; i < 50; i++) {
        printf("Fib %d : %20ld\n", i,Fibonacci(i));
    }
    return 0;
}

int Add(int a, int b) {
    return a + b;
}
int Sub(int a, int b) {
    return a - b;
}
int Mul(int a, int b) {
    return a * b;
}
float Div(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a / b;
    }
}
int Pow(int base, int expo) {
    int i;
    int c = 1;
    for (i = 0; i < expo; i++) {
        c = c * base;
    }
    return c;
}

int Fibonacci(int seq) {
    int i;
    int first = 0,second = 1, next;
    for (i = 0; i < seq; i++) {
        next = first + second;
        first = second;
        second = next;
    }
    return first;
}
