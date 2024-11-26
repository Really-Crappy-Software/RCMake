#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
  char bing[200] = "./rcmakefile ";
  FILE *bazinga;
bazinga = fopen("rcmakefile", "r");
  if (bazinga == NULL) {
    printf("Hm there seems to be nothing to compile\n");
  } else {
    strcat(bing, argv[2]);
    system(bing);
  }
  }
