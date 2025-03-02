#include "random.h"
#include <cstdlib>
#include <ctime>

int RandomNumber::Gen(int max) {
	srand(time(0)); // Using this to have a random seed for the number
	return rand() % max + 1;
}