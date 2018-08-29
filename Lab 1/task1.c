#include <stdio.h>
#include <conio.h>
#include <limits.h>
#include <float.h>
int main() {
	int a = INT_MAX;
	float b = FLT_MAX;
	double c = DBL_MAX;
	printf("%lu, %lu, %lu\n", sizeof(a),
		sizeof(b), sizeof(c));
	_getch();
	return 0;
}