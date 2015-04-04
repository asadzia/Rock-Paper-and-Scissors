/*
* Created by: Asad Zia
* 
* Description:
* An rock, papers and scissors simulation.
*
*/

#include <iostream>
#include <ctype.h>
#include <cstdlib>

using namespace std;

int main ()
{   // variable declarations:
    // GameStates stores the three states used in the game
    // The human variable represents for the option chosen the the user
    // The computer variable shows the option chosen by the computer
    // The Quit variable determines whether the program should be exited or not.
	enum GameStates{ROCK, PAPER, SCISSORS};
	char human, playAgain;
	int computer;
	bool Quit = false;


	cout << "*****************************************************" << endl;
	cout << "Welcome to the Rock, Paper and Scissors Simulation! *" << endl;
	cout << "Created and Programmed by Asad Zia                  *" << endl;
    cout << "*****************************************************";
    cout << endl;
    cout << endl;

    // an endless while loop until Quit is true.
	while(1)
	{
		if (Quit)
			break;
		{
			cout << "Please select one of the following option:" << endl;
			cout << "R for Rock" << endl;
			cout << "P for Paper" << endl;
			cout << "S for Scissors" << endl;
			cout << "Q for Quitting the game" << endl;
			cout << endl;

            // The input by the user
			cin >> human;
			human = tolower(human);

			if (human == 'q')
			{
				Quit = true;
				cout << "Thank You for Playing." << endl;
				break;
			}

            // the while loop which checks  if the value entered is correct
            while (1) {
                if (!(human == 'r' || human == 'p' || human == 's')) {
                    cout << "Invalid Option! Please try again:" << endl;
                    cin >> human;
                    if (human == 'q') {
                        exit(1);
                        break;
                    }
                }else{
                    break;
                }
            }

			computer = rand() % 3;

			switch(computer)
			{
			case ROCK:
				if (human == 'r')
					cout << "Computer chose 'ROCK'... Tied!" << endl;
				if (human == 'p')
					cout << "Computer chose 'ROCK'... You Win!" << endl;
				if (human == 's')
					cout << "Computer chose 'ROCK'... You Lose!" << endl;
				break;

			case PAPER:
				if (human == 'r')
					cout << "Computer chose 'PAPER'... You Lose!" << endl;
				if (human == 'p')
					cout << "Computer chose 'PAPER'... Tied!" << endl;
				if (human == 's')
					cout << "Computer chose 'PAPER'... You Win!" << endl;
				break;

			case SCISSORS:
				if (human == 'r')
					cout << "Computer chose 'SCISSORS'... You Win!" << endl;
				if (human == 'p')
					cout << "Computer chose 'SCISSORS'... You Lose!" << endl;
				if (human == 's')
					cout << "Computer chose 'SCISSORS'... Tied!" << endl;
				break;

            default:
				cout << "ERROR: Please try again" << endl;
				break;
			}

            cout << endl;
			cout << "Would you like to play again (Y/N): " << endl;
			cin >> playAgain;
			playAgain = tolower(playAgain);

			switch(playAgain)
			{
			case 'y':
				system("CLS");
				break;
			case 'n':
				Quit = true;
				cout << "Thank You for Playing!" << endl;
				break;
			default:
				cout << "Invalid choice! Restarting game..." << endl;
				system("CLS");
				break;
			}
		}
	}
	return 0;
}
