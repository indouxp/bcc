#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void usage(char *);
int main(int argc, char *argv[]) {
  char *name = strrchr(argv[0], '\\');
  if (argc <= 1) {
    fprintf(stderr, "no argument vector\n");
    usage(++name);
    return EXIT_FAILURE;
  }
  int iSec = atoi(argv[1]);
  fprintf(stderr, "sleep %d sec...\n", iSec);
  Sleep(iSec * 1000);
  return EXIT_SUCCESS;
}

void usage(char *name) {
  fprintf(stderr, "Usage\n");
  fprintf(stderr, "> %s NUMBER\n", name);
  fprintf(stderr, "Pause for NUMBER seconds.\n");
}
