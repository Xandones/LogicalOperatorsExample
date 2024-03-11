#include <iostream>
#include <tchar.h> // This library is related with character displaying.

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese")); // It's necessary the tchar library and this line to show special portuguese character such as cedil and spelling accents.
	double Number;
	bool LogicalResult; // This variable will store the logical result of a expression.
	bool LogicalResult2; // Same as the previous one.

	std::cout << "Type a number: ";
	std::cin >> Number;
	std::cout << "True => 1 and False => 0" << "\n";
	LogicalResult = ((Number > 100) && (Number != 0));
	std::cout << "The logical result of the expression ((Number > 100) && (Number != 0)) is: " << LogicalResult << "\n";
	LogicalResult2 = ((Number == 100) ||(Number > 200) && (Number < 1000));
	std::cout << "The logical result of the expression ((Number == 100) ||(Number > 200) && (Number < 1000)) is: " << LogicalResult2 << "\n";
	
	system("PAUSE");
}