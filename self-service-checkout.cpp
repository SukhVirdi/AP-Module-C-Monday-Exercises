//https://repl.it/join/eimoyjvv-sukhvirdi7
//Firstly my aim was to get input from the user for both the item cost and the quantity of the item then to convert it to either an integer for the quantity or float for the item cost.
//I decided to use a while loop to add the item and also validation to check whether an incorrect input was given to restart the function.
//Finally I made the concatenated the shopping tax that I calculated explained in the code comments below with the final total price.

#include <iostream>
#include<cstdlib>
#include <string>

using namespace std;

//this function adds a new item to the total which then shows the subtotal cost
float newItem() {
  string ItemQuantity, itemCost;
  int itemQuantityInt, count = 0;
  float itemCostFloat, subtotalCost;
  bool restart = false;

  //loop to add the item
  while (true) {
    count++;
    cout << "Please enter a quantity for item " << count << " (or 0 to finish): ";
    cin >> ItemQuantity;
    //converts input from string to integer
    itemQuantityInt = atof(ItemQuantity.c_str());
    //if statement checks if the user input is 0 or not which will exit the loop
    if (itemQuantityInt <= 0) {
      break;
    }

    cout << "Please enter item cost: ";
    cin >> itemCost;
    //converts input from string to float
    itemCostFloat = atof(itemCost.c_str());
    //item cost for float is calculated by multiplying cost by quantity 
    itemCostFloat *= itemQuantityInt;
    //item cost float is added to subtotal cost
    subtotalCost += itemCostFloat;

    cout << "\n";
  }
  //checks whether a incorrect input is given which would restart the function
  if (restart) {
    return newItem();
  } else {
    cout << "Thank you\n\nSubtotal: £" << subtotalCost << "\n";
    return subtotalCost;
  }
}

//main function
int main() {
  float tax = 0.055, shoppingTax, total;
  //assigns total to newItem 
  total = newItem();
  //shoppingTax is taken from total times tax
  shoppingTax = total * tax;
  //adds shopping tax to total
  total += shoppingTax;

//outputs to the user the shopping tax and the total price
  cout << "Shopping Tax: £" << shoppingTax << "\n\nTotal: £" << total;
}
