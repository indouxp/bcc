#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void usage(char *);
int main(int argc, char *argv[]) {
  char *name = strrchr(argv[0], '\\');
  ++name;
  if (argc < 3) {
    fprintf(stderr, "no argument vector\n");
    usage(name);
    return EXIT_FAILURE;
  }
 	int iSize = 0;
  iSize = atoi(argv[2]);
	for (int i = 0; i < iSize; i++) {
		if (atoi(argv[1]) == 1) {
			fprintf(stdout, "%c", 0x40);
		} else {
			fprintf(stderr, "%c", 0x40);
		}
	}
}

void usage(char *name) {
  fprintf(stderr, "Usage\n");
  fprintf(stderr, "> %s [1|2] NUMBER\n", name);
  fprintf(stderr, "NUMBER size @ stdardoutput or standarderr.\n");
}
