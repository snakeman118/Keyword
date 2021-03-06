// Keywords.cpp : Defines the entry point for the console application.
//1.Choice - Ability to pick what you want to do
//2.Anarchy - A state of no government control
//3.Quit - To give up, what you currently want to do
//4.Live - Not dead or inanimate
//5.Destroy - To take something that works and smash it until it is unable to function 
//6.Die - A state in the middle of life and death
//7.Fight - A violent confrontation to defend your beliefs
//8.Prom - High schools gerenally host this event
//9.Genuine - The real object and not a fake
//10.Triangle - An object with three angles

//setup libraries
#include "stdafx.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>


//shortcut commands
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
		// setup fot the variables of words and location within the fields
		enum fields { WORD, HINT, NUM_FIELDS };
		const int NUM_WORDS = 10;
		const string WORDS[NUM_WORDS][NUM_FIELDS] =
		{
			// words and hints for the jumbled game
			{"choice", "Ability to pick what you want to do."},
			{"anarchy", "A state of no government control."},
			{"quit", "To give up, what you currently want to do with this game."},
			{"live", "Not dead or inanimate."},
			{"destroy", "To take something that works and turn it into something that is non-workable anymore."},
			{"die", "A state in the middle of life and death."},
			{"fight", "A violent confrontation to defend ones beliefs."},
			{"prom", "High schools generally host these events."},
			{"genuine", "The real object and not a fake."},
			{"triangle", "An object with three angles."}
		};
		// setup the index for the words and hints
		int number = 0;
		srand(static_cast<unsigned int>(time(0)));
		int choice = (rand() % NUM_WORDS);
		string theWord = WORDS[choice][WORD];
		string theHint = WORDS[choice][HINT];
		// jumble the word
		string jumble = theWord;
		int length = jumble.size();
		for (int i = 0; i < length; ++i)
		{
			int index1 = (rand() % length);
			int index2 = (rand() % length);
			char temp = jumble[index1];
			jumble[index1] = jumble[index2];
			jumble[index2] = temp;
		}
		//give the user information and allow them to play the game
		cout << "\t\t\tWelcome to the scrambler of words.\n Where it is your job to take the words that i have scrambled and turn them into the origional words. \n I wish you the best of luck!\n";
		cout << "If you are confused enter the word hint for a hint, although that is basically giving up!\n";
		cout << "If you feel like actually giving up type quit to be a sore loser.\n";
		cout << "\nYour word to unscramble is: " << jumble;

		string guess;
		cout << "\n\nYour guess: ";
		cin >> guess;
		// setup to play the game if the word is incorrect and player has not quit
		while ((guess != theWord) && (guess != "quit"))
		{
			// show hint
			if (guess == "hint")
			{
				cout << theHint;
			}
			else
			{
				//tell them they are wrong
				cout << "Muahahahaha, you are wrong!";
			}
			cout << "\n\nYour guess: ";
			cin >> guess;
		}
		// show the user if they are right
		if (guess == theWord)
		{
			cout << "You have found the word congratulations.\n";
			number += 1;
			system("pause");
	}
	cout << "Thank you for playing\n";

	//endgame
    return 0;
}

