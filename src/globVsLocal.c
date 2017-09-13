#include <stdio.h>

int globVar = 10; //This is Global Variable

void newFunction () {
	int localVar = 30;
	printf("localVar on newFunction : %d\n", localVar);
	printf("globVar on  newFunction : %d\n", globVar);
}

int main () {
	int localVar = 20;
	printf("localVar on main : %d\n", localVar);
	printf("globVar on main : %d\n", globVar);
	newFunction();
}
