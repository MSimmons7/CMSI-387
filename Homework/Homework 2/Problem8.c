#include <unistd.h>
#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[]){
  int arrSize = 1000000;
  char arr[arrSize];
  for (int i = 0; i < arrSize; i++) {
    if (i == 4095) {
      return arr[i];
    }
  }
}
