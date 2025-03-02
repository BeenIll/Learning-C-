#include <iostream>
#include "random.h"
#include <stdlib.h>
#include <string>
#include <Windows.h>
bool guess(int max, int num) {
	system("cls"); // Clear the console after each guess

	int numGuess;

	std::cout << "Guess a number from 1 to " << std::to_string(max) << ": ";

	std::cin >> numGuess;

	std::cout << "\n";

	if (numGuess > num) {
		std::cout << "Wrong! \nHint: lower\n";
		return false;
	}
	else if (numGuess < num) {
		std::cout << "Wrong! \nHint: higher\n";
		return false;
	}
	else if (numGuess == num) {
		std::cout << "Correct!\n";
		return true;
	}

	Sleep(1000);
}

int main() {
	int difficulty;
	int max = 100;

	std::cout << "Choose a difficulty (1 easy, 2 medium, 3 hard): ";

	std::cin >> difficulty;

	switch (difficulty)
	{
	case '1':
		max = 100;
		break;

	case '2':
		max = 500;
		break;

	case '3':
		max = 1000;
		break;
	}

	int number = RandomNumber::Gen(max);


	bool success = guess(max, number);

	Sleep(1000);

	while (success == false) {
		success = guess(max, number);
		Sleep(1000);
	}

	return 0;
}