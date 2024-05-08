#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class RockPaperScissors {
public:
    void displayMenu() {
        cout << "===== Rock Paper Scissors =====" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
    }

    void playGame() {
        srand(time(0));
        int playerChoice, computerChoice;

        while (true) {
            displayMenu();
            cin >> playerChoice;

            if (playerChoice == 4) {
                cout << "Thanks for playing!" << endl;
                break;
            }

            computerChoice = (rand() % 3) + 1;

            switch (playerChoice) {
                case 1:
                    cout << "You chose Rock." << endl;
                    break;
                case 2:
                    cout << "You chose Paper." << endl;
                    break;
                case 3:
                    cout << "You chose Scissors." << endl;
                    break;
                default:
                    cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
                    continue;
            }

            switch (computerChoice) {
                case 1:
                    cout << "Computer chose Rock." << endl;
                    break;
                case 2:
                    cout << "Computer chose Paper." << endl;
                    break;
                case 3:
                    cout << "Computer chose Scissors." << endl;
                    break;
            }

            if (playerChoice == computerChoice) {
                cout << "It's a tie!" << endl;
            } else if ((playerChoice == 1 && computerChoice == 3) ||
                       (playerChoice == 2 && computerChoice == 1) ||
                       (playerChoice == 3 && computerChoice == 2)) {
                cout << "You win!" << endl;
            } else {
                cout << "Computer wins!" << endl;
            }
        }
    }
};

int main() {
    RockPaperScissors game;
    game.playGame();
    return 0;
}

