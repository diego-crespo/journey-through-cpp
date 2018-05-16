// Menu Chooser 2.0
// Use an enumeration to choose menu

#include <iostream>

using namespace std;

int main()
{

  enum difficulty {EASY, NORMAL, HARD};
  difficulty choice;

  cout << "Difficulty Levels\n\n";
  cout << "1 - Easy\n";
  cout << "2 - Normal\n";
  cout << "3 - Hard\n";  

  cout << "Choice: ";
  cin >> choice;

  switch (choice)
    {
    case 1:
      cout << "You picked Easy.\n";
      break;
    case 2:
      cout << "You picked Normal.\n";
      break;
    case 3:
      cout << "You picked Hard.\n";
      break;

    default:
      cout << "You made an illegal choice.\n";
    }
  return 0;
}

