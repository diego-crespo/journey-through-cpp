// Favorite Games
// input and show a list of favorite games

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  vector<string> game_list; //Don"t use parentheses to invoke the default constructor:
  vector<string>::iterator myIterator;
  vector<string>::const_iterator iter;
  
  bool expand = true;


  cout << "\n Tell me your favorite game." << endl;
  cin << game_list;

  myIterator = game_list.begin();

  while (expand != false)
    {
      string print_list;
      string answer;

      cout << "Would You like to add another y/n?" << endl;
      cin << answer;

      if (answer == "y")
	{
	  cout << "Tell me another game" << endl;
	  cin << *myIterator;
	}

      else
	{
	  expand = false;
	}
      
      cout << "print current list y/n" << endl;
      cin << print_list;

      if (print_list == "y")
	{
	  for (iter = game_list.begin(); iter < game_list.end(); ++iter)
	    {
	      cout << *iter << endl;
	    }
	}

    }
  
  return 0;
}


// Favorite Games
// input and show a list of favorite games

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  vector<string> game_list; //Don't use parentheses to invoke the default constructor:
  vector<string>::iterator myIterator;
  vector<string>::const_iterator iter;
  
  bool expand = true;


  cout << "\n Tell me your favorite game." << endl;
  cin << game_list;

  myIterator = game_list.begin();

  while (expand != false)
    {
      string print_list;
      string answer;

      cout << "Would You like to add another y/n?" << endl;
      cin << answer;

      if (answer == "y")
	{
	  cout << "Tell me another game" << endl;
	  cin << *myIterator;
	}

      else
	{
	  expand = false;
	}
      
      cout << "print current list y/n" << endl;
      cin << print_list;

      if (print_list == "y")
	{
	  for (iter = game_list.begin(); iter < game_list.end(); ++iter)
	    {
	      cout << *iter << endl;
	    }
	}

    }
  
  return 0;
}
