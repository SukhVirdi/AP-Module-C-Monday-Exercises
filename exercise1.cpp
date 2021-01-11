//https://repl.it/join/blmzpnqi-sukhvirdi7
//Firstly worked on asking for user input: their quote and who said it.
//Then i concatonated the inputs together to show the output
//Used a getline library function to extract the characters from the input stream 

#include <iostream>
using namespace std;

int main() {
	string quote;
	string author;
	
	cout << "What is the quote? ";
	getline(cin, quote);

	cout << "Who said it? ";
	getline(cin, author);
	
	cout << "\n" << author << " says: \"" << quote << "\"\n";

	return 0;
}
