#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int n;
	sscanf_s(argv[1], "%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int x = 0; x < n - i; x++) {
			printf(" ");
		}
		for (int y = 0; y < i * 2 - 1; y++) {
			printf("*");
		}
		for (int z = 0; z < n - i; z++) {
			printf(" ");
		}
		printf("\n");
	}
	_getch();
	return 0;
}