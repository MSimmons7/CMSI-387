#include <stdio.h>
#include <sys/mman.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int page = open("../Homework 3/Sherlock.txt", O_RDONLY);
  size_t pagesize = getpagesize();
  char * region = mmap(
    (void*) (pagesize * (1 << 20)), pagesize,
    PROT_READ, MAP_FILE|MAP_PRIVATE,
    page, 0
  );
  char *asChar = (char*)region;
  char currByte = asChar[8];
  if (strncmp("currByte", "X", 8)) {
      printf("Success\n");
      close(page);
  } else {
      printf("FAIL\n");
      close(page);
  }
  close(page);
  return 0;
}