//https://repl.it/join/cwxpapeo-sukhvirdi7
//In the code below I made a basic temperature conversion program with F and C convert MVP. If the user input is not the right data type then display an error/invalid input message. The user can also enter either uppercase/lowercase options when choosing their units.
//I utilised an if statement based on the request it will execute the corresponding calculation, which is then concatonated with all the inputs display the desired output.

#include<iostream>
using namespace std;

//main program
int main()
{
  float temperature, fahrenheit, centigrade;
  char option;
  
  //asks user to enter the starting temperature
  cout << "Please enter the starting temperature: ";
  cin >> temperature;
  cout << "Press ‘C’ to convert from Fahrenheit to Centigrade." << endl;
  cout << "Press ‘F’ to convert from Centigrade to Fahrenheit." << endl;
  cin >> option;

  //option for converting Fahrenheit into Centigrade
  if (option == 'C' || option == 'c') {
  centigrade = ((temperature - 32) / 1.8); //temperature conversion 
  cout << "Your choice is " << option << endl;
  cout << temperature << " degrees Fahrenheit is " << centigrade  << endl;
  }
  //option for converting Centigrade into Fahrenheit
  else if (option == 'F' || option == 'f') {
  fahrenheit = ((1.8 * temperature) + 32.0);
  cout << "Your choice is " << option << endl;
  cout << temperature << " degrees Centigrade is " << fahrenheit  << endl;
  }
  //wrong input is shown if the user inputs a non-float and exits program
  else
  cout << "Error Wrong Input." << endl;

  return 0;
}
