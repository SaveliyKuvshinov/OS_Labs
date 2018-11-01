#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setvbuf(stdin, NULL, _IOLBF, 0);
  char str[] = "Hello";
  for (int i = 0; i < 5; i++)
  {
  	printf("%c", str[i]);
  	sleep(1);
  }

  printf("\n");

  return 0;
}