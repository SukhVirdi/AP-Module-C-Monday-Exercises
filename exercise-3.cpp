//https://repl.it/join/dnbnepeq-sukhvirdi7
//My first priority involve calculating the square foot and then converting the result to square meters, I found this program straightforward with issues.

#include <iostream>
using namespace std;

int main() {
  float length,
  width,
  squareFoot,
  squareMeters;

  const float footToMeters = 10.764;
  //Instanciating variables, including const footToMeters conversion factor

  cout << "What is the length of the room in feet? ";
  cin >> length;
  cout << "What is the width of the room in feet? ";
  cin >> width;
  //Asking for inputs on length and width

  squareFoot = width * length;
  squareMeters = squareFoot / footToMeters;
  //Working out squareFoot and squareMeters

  cout << "Your room’s dimension is " << length << " by " << width << " feet, the area is: \n" << squareFoot << " square foot \n" << squareMeters << " square meters \n";
  //Output of the result after the conversion

  return 0;
}
