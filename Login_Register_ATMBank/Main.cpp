
#include "ATM.h"
#include <iostream>

using namespace std;

ATM atm;
Account acc;

int main()
{
	atm.displayMenu();
	atm.processMenuChoices();
	return 0;
}