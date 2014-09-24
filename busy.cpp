#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void usage(char *);
int main(int argc, char *argv[]) {
  char *name = strrchr(argv[0], '\\');
  ++name;
  if (argc <= 1) {
    fprintf(stderr, "no argument vector\n");
    usage(name);
    return EXIT_FAILURE;
  }
  int iTimes = atoi(argv[1]);
  printf("%s:loop %d~%d times\n", name, iTimes, iTimes);
  for (int i = 0; i < iTimes; i++) {
    for (int j = 0; j < iTimes; j++) {
      // busy
    }
  }
  if ((iTimes % 3) == 0) {
    fprintf(stdout, "%s:rc:%d\n", name, EXIT_SUCCESS);
    return EXIT_SUCCESS;
  } else {
    fprintf(stderr, "%s:rc:%d\n", name, EXIT_FAILURE);
    return EXIT_FAILURE;
  }
}

void usage(char *name) {
  fprintf(stderr, "Usage\n");
  fprintf(stderr, "> %s NUMBER\n", name);
  fprintf(stderr, "Pause for NUMBER seconds.\n");
}
