#include <iostream>
#include <cmath>

bool isPrime(long long);

int main(void)
{
    long long a;

    std::cout << "Ingrese un número para determinar si es primo: ";
    std::cin >> a;
    std::cout << (isPrime(a) ? std::to_string(a) + " es primo." : std::to_string(a) + " no es primo.") << std::endl;

    return 0;
}

bool isPrime(long long number)
{
    if (number <= 1)
        return false;
    else if (number <= 3)
        return true;
    else if (number % 2 == 0 || number % 3 == 0)
        return false;

    int i = 5;
    while (i * i <= number)
    {
        if (number % i == 0 || number % (i + 2) == 0)
            return false;
        i += 6;
    }

    return true;
}