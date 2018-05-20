#include <iostream>
using namespace std;

int main()
{
  int x = 0;
  while (x)
    {
      ++x;
      cout << x << endl;
      cout << "Hello" << endl; // to test if loop runs
    }
}
// This would be considered an infinite loop if x was initialized
// To anything other than 0. 0 is evaluated as false in C++
// Therefore the loop will not run. But if x was > 0 then it
// would be infinite

