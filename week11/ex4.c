#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>


int main() {
  struct stat st;
  char *src, *dst;
  int fdin = open("ex1.txt", O_RDONLY);
  int fdout = open("ex1.memcpy.txt", O_RDWR | O_TRUNC | O_CREAT, (mode_t)0600);
  fstat(fdin, &st);
  lseek(fdin, st.st_size-1, SEEK_SET);
  lseek (fdout, st.st_size - 1, SEEK_SET);
  write(fdout, "", 1); 
  src = mmap(0, st.st_size, PROT_READ, MAP_SHARED, fdin, 0);
  dst = mmap (0, st.st_size, PROT_READ | PROT_WRITE, MAP_SHARED, fdout, 0);
  memcpy (dst, src, st.st_size);
  close(fdin);
  close(fdout);
  return 0;
}