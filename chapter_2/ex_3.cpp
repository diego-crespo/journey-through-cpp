#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(static_cast<unsigned int>(time(0))); // seed the generator

  int initialGuess = rand() % 100 +1; // constrict to 1-100
  int tries = 0;
  int guess;
  string answer;

  cout << "\t Welcome to Guess My Number\n\n";

  do
    {
      cout << "Is it " << initialGuess << "?" << endl;
      cin >> answer;
      if (answer == "LOWER")
	{
	  initialGuess = rand() % initialGuess + 1;
	  ++tries;
	}
      if (answer == "HIGHER")
	{
	  initialGuess = rand() % initialGuess + initialGuess;
	  ++tries;
	}
      else
	{
	  cout << "I'm sorry that is not a valid options" << endl;
	  cout << "The valid options are HIGHER, LOWER, YES" << endl;
	}
    } while (answer != "YES");
  cout << "It took " << tries << " guesses." << endl;
}
      
	  
      
      
