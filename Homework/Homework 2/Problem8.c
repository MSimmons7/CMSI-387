#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
  clock_t start, end;
  start = clock();
  char *ptr = malloc(1000000);
  for (int i = 0; i < 1000000; i++) {
    ptr[i] = i;
  }
  for (int i = 0; i < 1000000; i++) {
    if ((i+1) % 4096) {
      printf("");
    }
  }
  end = clock();
  double time_taken = ((double)start)/CLOCKS_PER_SEC; // in seconds 
  printf("took %f seconds to execute \n", time_taken); 
}
