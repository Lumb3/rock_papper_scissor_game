#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int userChoice, computerChoice;
    string choices[] = {"Rock", "Paper", "Scissor"};

    cout << "Rock Paper Scissors Game" << endl;
    cout << "Choose: (0) Rock, (1) Paper, (2) Scissor: ";
    cin >> userChoice;

    if (userChoice < 0 || userChoice > 2)
    {
        cout << "Invalid choice! Please select 0, 1, or 2." << endl;
        return 1;
    }

    computerChoice = rand() % 3; // Random choice for computer

    cout << "You chose: " << choices[userChoice] << endl;
    cout << "Computer chose: " << choices[computerChoice] << endl;

    if (userChoice == computerChoice)
    {
        cout << "It's a tie!" << endl;
    }
    else if ((userChoice == 0 && computerChoice == 2) ||
             (userChoice == 1 && computerChoice == 0) ||
             (userChoice == 2 && computerChoice == 1))
    {
        cout << "You win!" << endl;
    }
    else
    {
        cout << "Computer wins!" << endl;
    }

    return 0;
}
