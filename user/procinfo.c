#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  printf("Active processes: %d\n", getnproc());
  exit(0);
}
