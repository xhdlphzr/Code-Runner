#include <cstdlib>

using namespace std;

int main()
{
  system("setx PATH \"%PATH%;%cd%\\Windows\" /M");

  return 0;
}
