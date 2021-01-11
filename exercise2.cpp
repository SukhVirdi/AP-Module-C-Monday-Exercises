//https://repl.it/join/cwxpapeo-sukhvirdi7
//In the program below I used two options for temperature conversion. If the user does not match then it will display an error message.
//I utilised an if statement based on the request it will execute the corresponding calculation, which is then concatonated with all the inputs to show the output.

#include<iostream>
using namespace std;

//main program
int main()
{
  float temp, fahr, cen;
  char option;
  
  //asks user to enter the starting temperature
  cout << "Please enter the starting temperature: ";
  cin >> temp;
  cout << "Press ‘C’ to convert from Fahrenheit to Centigrade." << endl;
  cout << "Press ‘F’ to convert from Centigrade to Fahrenheit." << endl;
  cin >> option;

  //option for converting Fahrenheit into Centigrade
  if (option == 'C' || option == 'c') {
  cen = ((temp - 32) / 1.8); //temperature conversion 
  cout << "Your choice is " << option << endl;
  cout << temp << " degrees Fahrenheit is " << cen  << endl;
  }
  //option for converting Centigrade into Fahernheit
  else if (option == 'F' || option == 'f') {
  fahr = ((1.8 * temp) + 32.0);
  cout << "Your choice is " << option << endl;
  cout << temp << " degrees Centigrade is " << fahr  << endl;
  }
  //wrong input is shown if the user inputs a non-float and exits program
  else
  cout << "Error Wrong Input." << endl;

  return 0;
}
