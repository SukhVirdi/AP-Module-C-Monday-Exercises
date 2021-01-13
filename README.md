# AP-Module-Cpp-Monday-Exercises
This repo is part of my 'Advanced Programming' module. It contains all of the Monday exercises / primers.

## Exercise 1: Quote a quote
Quotation marks are often used to denote the start and end of a string. However, sometimes we need to print out the quotation marks (both single and/or double quotes) themselves using escape characters (a.k.a. escape sequences).

This C++ program prompts the user for a quote and then for an author, here is the formatted questions with some sample output:
```
What is the quote? The way to get started is to quit talking and begin doing.
Who said it? Walt Disney

Walt Disney says: “The way to get started is to quit talking and begin doing.”
```

## Exercise 2 / Primer 1: Temperature Conversion
A C++ program that converts temperatures from Fahrenheit to Centigrade and Centigrade to Fahrenheit based on the user’s input. This program prompts the user for a starting temperature followed by which type of conversion to perform the conversion with.

Example output:
```
Please enter the starting temperature: 60.1
Press ‘C’ to convert from Fahrenheit to Centigrade.
Press ‘F’ to convert from Centigrade to Fahrenheit.

Your choice: C
60.1 degrees Fahrenheit is 15.6111
```

## Exercise 3: Area of a Rectangle
When working in a global environment (and building on the work I completed in exercise 2) there is often a requirement to present information using different standards – in this exercise I was required to convert values between imperial and metric units.

I created a C++ program that prompts the user for the length and width of a room in feet then display the area in both feet and meters squared; the expected output is shown below:
```
What is the length of the room in feet? 15
What is the width of the room in feet? 20

Your room’s dimension is 15 by 20 feet, the area is:
300 square foot
27.809 square meters
```

## Primer 2: Number Guesser
A C++ ‘guess the number’ game that supports three levels of difficulty; level 1 is limited to numbers 1..10, level 2 is limited to numbers 1..100 and level 3 is limited to numbers 1..1000. It prompts the user to select a difficulty level before the game begins. The program picks a random number and prompts the player to ‘guess’; each time the player ‘guesses’ the program provides a hint (e.g., too low, too high).

The program logs the number of guesses and once correct tells the player how many attempts were made before asking them to ‘play again’. Example output:
```
Let’s play ‘Guess the Number’
Please pick a difficulty level (1, 2 or 3)? 1

Great, I have randomly picked a number in the range 1 - 10
What’s your guess? 5
Too low, guess again: 8
Too high, guess again: 7

Well done, most impressive! the number was 7 – you got it in 3 guesses
Do you want to play again (Y/N)? N
No problem, see you later.
```

## Primer 3: Self-Service Checkout
Working with multiple inputs and currency can introduce possible issues. I created a C++ Self-Service Checkout program. Using a loop to prompt the user for a quantity (integer) and then the ‘per item’ cost (float). Repeat the process until the quantity entered is <= 0.

Once the user has finished entering items show the total cost of all the items and a new shopping tax (the tax has been introduced to help the country’s financial recovery from Covid); an example output is shown below:
```
Please enter a quantity for item 1 (or 0 to finish): 3
Please enter item 1 cost: 0.99

Please enter a quantity for item 2 (or 0 to finish): 2
Please enter item 2 cost: 1.50

Please enter a quantity for item 3 (or 0 to finish): 1
Please enter item 2 cost: 2.99

Please enter a quantity for item 3 (or 0 to finish): 0
Thank you.

Subtotal: £8.96
Shopping Tax: £0.4928

Total: £8.4528
```
