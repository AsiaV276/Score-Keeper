# Score-Keeper
A C++ console application that collects judges scores and outputs results.


The application asks the user for the number of contestants. (This is an element that I recently added and affects the results).
The user inputs the scores for 6 judges with the constraint that the scores must be values between and including 0 and 10.
If a score is outside of that range the user is prompted to enter the score again. The program does not continue to the next judge's score input until the previous score is entered correctly.
The program prompts the user for input for each contestant. 
The program outputs the highest score and the lowest score. It also outputs the average score of the remaining 4 scores because the program originally only asked for the input for 1 contestant. 
I am currently working on adjusting the program to accurately reflect the scores of more than 1 contestant.
