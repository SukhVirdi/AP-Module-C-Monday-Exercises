//https://repl.it/join/ohlwekyq-sukhvirdi7
//I wanted to split the program into two main parts the first one prompting the user to select a difficulty (using a switch case), computer selecting a number. Then for the second part, the user would input an answer which is checked against the secret number with the guess count outputted at the end when it is concatenated. My second switch case is then used to ask whether they want to start again which is essentially rerunning the start function.

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void Start();
void getResults();

int userGuess, secretNumber, guessCount, maxRandomNumber;
char c;

void Start() {
	userGuess = 0;
	secretNumber = 0;
	guessCount = 0;
	maxRandomNumber = 6;

  //the user has to select a difficulty level	
	cout << "Please pick a difficulty level(1, 2 or 3)? "; 

	c = 30;
  //read the user's choice
	cin >> c;
	cout << "\n";

	switch (c) {
		case '1':
      //the random number will be between 0 and maxrand
			maxRandomNumber = 10;
			break;
		case '2':
			maxRandomNumber = 100;
			break;
		case '3':
			maxRandomNumber = 1000;
			break;
		default:
			exit(0);
		break;
	}
  //number of guesses of the player
	guessCount = 1;         
  //init Rand() function
	srand((unsigned)time(NULL)); 
  //secretNumber get a random value between 0 and maxrand
	secretNumber = rand() % maxRandomNumber;  
	cout << "Great, I have randomly picked a number in the range 1 - " << maxRandomNumber << '\n';
  cout << "What's your guess? ";
	getResults();
}

void getResults() {
  char playAgain;
  cin >> userGuess;
  
  //if the user guess isn't correct, restart
	if((userGuess>maxRandomNumber) || (userGuess<0)) { 
		cout << "Error: number not between 0 and \n" << maxRandomNumber;
		getResults();
	}
  //the user found the secret number
	if(userGuess == secretNumber) {
		cout << "Well done, the number was " << secretNumber << " - you got it in " << guessCount << " guesses\n";
    cout << "Do you want to play again (Y/N)? ";
    cin >> playAgain;

    switch (playAgain) {
      case 'Y': Start();
      case 'N': cout << "No problem, see you later."; break;
    }

	} else if(userGuess>secretNumber) {
		cout << "Too high, guess again: ";
		guessCount = guessCount + 1;
		getResults();

	} else if(userGuess<secretNumber) {
		cout << "Too low, guess again: ";
		guessCount = guessCount + 1;
		getResults();
	}
}

int main() {
	cout << "Let's play ‘Guess the Number’ \n";
	Start();
	return 0;
}
