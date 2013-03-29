#include <stdio.h>
int main(void) {
	int i = 0;
	int  sum = 0;
	while(i < 11) {
		sum += i;
		i++;
		printf("i = %d\t",i);
	}
	printf("sum = %d\n", i, sum);
}
		
