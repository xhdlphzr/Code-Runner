#include <cstdlib>

using namespace std;

int main()
{
  system("setx -m PATH \"%PATH% %cd%\\Windows\" /M");

  return 0;
}
