#include <stdio.h>
#include <conio.h>
int main() {
	char str[256];
	gets(str);
	for (int i = strlen(str) - 1; i >= 0; i--) {
		putchar(str[i]);
	}
	_getch();
	return 0;
}