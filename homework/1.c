#include <stdio.h>
int main(void) {
	char *ptr;
	char buf[1024];
	int arr[1024];
	buf[999] = 'a';
	ptr = buf;
	printf("buf address %p\n",buf);
	printf("buf[0] address %p\n",&buf[0]);
	printf("buf[1] address %p\n",&buf[1]);
	printf("arr address %p\n",arr);
	printf("arr[0] address %p\n",&arr[0]);
	printf("arr[1] address %p\n",&arr[1]);
	printf("sizeof(int) = %d\n", sizeof(int));
	printf("sizeof(float) = %d\n", sizeof(float));
	printf("sizeof(double) = %d\n", sizeof(double));
	printf("ptr address %p\n", ptr);
	printf("ptr+1 address %p\n",ptr+1);
	printf("buf + 1 address %p\n",buf+1);
	printf("value in buf[999]: %d\n",buf[999]);
	printf("value in *(ptr+999): %d\n", *(ptr+999));

	return 0;
}
