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
  
  char run_code[114514] = {};
  
  sprintf(run_code, "g++ .\\source\\%s.cpp -o .\\build\\%s.exe -g -D DEBUG -std=c++14 && .\\build\\%s.exe", argv[1], argv[1], argv[1]);
  
  // printf("%s", run_code);
  printf("%s.cpp Build now!!!", argv[1]);

  system(run_code);

  return 0;
}
