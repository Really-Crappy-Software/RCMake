#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char* argv[]) {
  char bing[15] = "./rcmakefile";
  FILE *bazinga;
bazinga = fopen(bing , "r");
  if (bazinga == NULL) {
    printf("Hm there seems to be nothing to compile\n");
  } else {
    strcat(bing, argv[2]);
    strcpy(argv[1], bing);
          pid_t winblows = fork();
      if (winblows==0) {
      execvp(bing, argv);
      }
  }
  }
