#include <stdio.h>


int sum(int value1, int value2);
int main(void) {
	int a = 19;
	int b = 20;
	int result = 0;
	result = sum(a,b);
	printf("a+b = %d\n", result);
	printf("a+b = %d\n", sum(a,b));
	return 0;
}

int sum(int value1, int value2) {
	return (value1+value2);
}
