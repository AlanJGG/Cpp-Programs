#include <iostream>

bool isLeapYear(int);

int main(void)
{
    int year;

    std::cout << "Ingrese un anio para comprobar si es bisiesto: ";
    std::cin >> year;
    std::cout << (isLeapYear(year) ? std::to_string(year) + " es bisiesto." : std::to_string(year) + " no es bisiesto") << std::endl;
}

bool isLeapYear(int year)
{
    if (year % 100 == 0 && year % 400 == 0)
        return true;
    else if (year % 4 == 0)
        return true;
    else
        return false;
}
