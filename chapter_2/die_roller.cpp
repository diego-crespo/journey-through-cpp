// Die Roller
// Demonstrates generating random numbers

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(static_cast<unsigned int>(time(0))); //seed random number generator What is this monstrocity?

  int randomNumber = rand(); //generate random number

  int die = (randomNumber % 6) + 1; // get a number between 1 and 6
  cout << "You rolled a " << die << endl;
  cout << RAND_MAX << endl;

  return 0;
}
