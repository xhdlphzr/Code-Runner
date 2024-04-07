#include <cstdio>
#include <cstdlib>

using namespace std;

void run(char path[], char mode[])
{
  char build_code[] = {};
  char run_code[] = {};

  sscanf(build_code, "g++ .\\%s.cpp -o .\\%s.exe -g -D DEBUG -O2 -static -std=c++14", path[1], path[2]);

  if (mode == "run")
  {
    system(build_code);
    
    sscanf(run_code, ".\\%s.exe", path[2]);
    printf(".\\%s.cpp Run Now !", path[1]);
  }

  if (mode == "debug")
  {
    system(build_code);

    sscanf(run_code, "gdb .\\%s.exe", path[2]);
    printf(".\\%s.cpp Debug Now !", path[1]);
  }

  if (mode == "build")
  {
    system(build_code);

    printf(".\\%s.cpp Debug Now !", path[1]);
  }

  system(run_code);

  return;
}
