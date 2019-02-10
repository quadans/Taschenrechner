#include <iostream>


double getValue()
{
	double x(0);
	std::cout << "Gebe eine zahl ein: ";
	std::cin >> x;
	return x;
}

char getOperator()
{
	std::cout << "Enter one of the following mathematical symbols: +, -, *, or /. ";
	char gO;
	std::cin >> gO;
	return gO;
}

void Answer(double ersteZahl, double zweiteZahl, char gO)
{
	if (gO == '+')
	{
		std::cout << "Ergebnis lautet : " << ersteZahl + zweiteZahl << "\n";
	}
	if (gO == '-')
	{
		std::cout << "Ergebnis lautet : " << ersteZahl - zweiteZahl << "\n";
	}
	if (gO == '*')
	{
		std::cout << "Ergebnis lautet : " << ersteZahl * zweiteZahl << "\n";
	}
	if (gO == '/')
	{
		std::cout << "Ergebnis lautet : " << ersteZahl / zweiteZahl << "\n";
	}
}