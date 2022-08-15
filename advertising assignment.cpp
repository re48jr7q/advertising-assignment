#include <iostream>
#include "advertising assignment.h"

int advertisingShown()
{
	std::cout << "Choose an advertising, 0 = cars, 1 = chips, 2 = lemonade: ";
	int ad{};
	std::cin >> ad;
	switch (ad)
	{
	case 0: return 1; break;
	case 1: return 1; break;
	case 2: return 1; break;
	default: return 0; break;
	}
}
int main()
{
	advertisingShown();
}
