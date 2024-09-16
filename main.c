#include <stdio.h>
#include <stdlib.h>

#include "confuzzle.h"

int main(int argc, char **argv) {
  printf("Hello World!!!\n");
  if (argc < 2) {
    printf("Specify student ID as a command line argument\n");
    exit(0);
  }
  printf("Confuzzle executing, return value %i\n", confuzzle(argv[1]));
  return 0;
}
