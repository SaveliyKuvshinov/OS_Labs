#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>




int main() {
    int random = open("/dev/random", O_RDONLY);
    char str[20];
    size_t len = 0;
    while (len < sizeof str)
    {
        ssize_t result = read(random, str + len, (sizeof str) - len);
        len += result;
    }
    printf("%s\n", str);
    FILE* fdout;
    fdout = fopen("ex1.txt", "w");
    fprintf(fdout, "%s\n", str);
    fclose(fdout);
    close(random);
}