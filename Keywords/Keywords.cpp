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

#include <string>
#include "stdafx.h"
#include <cstdlib>
#include <ctime>
#include <iostream>


int main()
{
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"choice", "ability to pick what you want to do."},
		{"anarchy", "A state of no government control"},
		{"quit", "To give up, what you currently want to do with this game."},
		{"live", "Not dead or inanimate"}
		{"destroy", "}
		{}
		{}
		{}
		{}
	}
    return 0;
}

