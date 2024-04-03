#include "..\\include\\cpp.h"

int main (int argc, char *argv[]) 
{
  if (argc != 2)
  {
    printf("You Can't Do That !");

    return 0;
  }

  run(argv[1], argv[0]);

  return 0;
}
