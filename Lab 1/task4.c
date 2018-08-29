#include <stdio.h>


int main() {
	int aa = 0;
	int ba = 0;
	scanf_s("%d %d", &aa, &ba);
	swap(&aa, &ba);
	printf("%d %d\n", aa, ba);
	return 0;
}


void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}