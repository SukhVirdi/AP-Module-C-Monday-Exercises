# AP-Module-Cpp-Monday-Exercises
This repo is part of my 'Advanced Programming' module. It contains all of the Monday exercises / challenges.
## Exercise 1: Quote a quote
Quotation marks are often used to denote the start and end of a string. However, sometimes we need to print out the quotation marks (both single and/or double quotes) themselves using escape characters (a.k.a. escape sequences).

This C++ program prompts the user for a quote and then for an author, here is the formatted questions with some sample output:
```
What is the quote? The way to get started is to quit talking and begin doing.
Who said it? Walt Disney
Walt Disney says: “The way to get started is to quit talking and begin doing.”
```

## Exercise 2: Temperature Conversion
A C++ program that converts temperatures from Fahrenheit to Centigrade and Centigrade to Fahrenheit based on the user’s input.

This program prompts the user for a starting temperature followed by which type of conversion to perform the conversion with:
```
Please enter the starting temperature: 60.1
Press ‘C’ to convert from Fahrenheit to Centigrade.
Press ‘F’ to convert from Centigrade to Fahrenheit.
Your choice: C
60.1 degrees Fahrenheit is 15.6111
```

## Number Guesser:
A C++ ‘guess the number’ game that supports three levels of difficulty; level 1 is limited to numbers 1..10, level 2 is limited to numbers 1..100 and level 3 is limited to numbers 1..1000. It prompts the user to select a difficulty level before the game begins. The program picks a random number and prompts the player to ‘guess’; each time the player ‘guesses’ the program provides a hint (e.g., too low, too high).

The program logs the number of guesses and once correct tells the player how many attempts were made before asking them to ‘play again’. Example outpuit:
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
