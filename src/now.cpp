#include <iostream>
#include <time.h>

using namespace std;

int main()
{
  time_t now;
  struct tm * result;

  time(&now);
  result = gmtime(&now);

  cout << mktime(result) << endl;
  return 0;
}
