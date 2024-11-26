#include <stdio.h>
#include <unistd.h>
#include <colour.h>

int main(int argc, char* argv[]) {
printf("compiling");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf("%sDONE%s\n", GRN, RESET);
}
