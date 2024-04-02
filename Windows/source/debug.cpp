#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int main (int argc, char *argv[]) 
{
  if (argc != 2)
  {
    printf("You can't do that!!!");

    return 0;
  }
  
  char path[114514] = {};
  char run_code[114514] = {};
  
  strcpy(path, argv[1]);
  sprintf(run_code, "g++ .\\source\\%s.cpp -o .\\build\\%s.exe -g -D DEBUG -std=c++14 && gdb .\\build\\%s.exe", path, path, path);
  
  // printf("%s", run_code);
  printf("Debug now!!");

  system(run_code);

  return 0;
}
