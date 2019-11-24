#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){
  int value;
  int *p = &value;
  if(argc != 2) {
    fprintf(stderr, "usage: %s <value>\n", *argv);
    return EXIT_FAILURE;
  }
  printf("(pid:%d) addr of p: %llx\n", (int)getpid(), (unsigned long long)&p);

  printf("(pid:%d) addr stored in p: %llx\n", (int)getpid(), (unsigned long long)p);

  *p = atoi(argv[1]);
  while(1) {
    sleep(1);
    ++*p;
    printf("(pid:%d) value of p: %d\n", getpid(), *p);
  }
}
