#include <iostream>

int findLargestNumber(int, int, int);

int main(void)
{
    int a, b, c;

    std::cout << "Ingrese tres numeros: ";
    std::cin >> a >> b >> c;

    std::cout << "El número más grande es " << findLargestNumber(a, b, c) << std::endl;

    return 0;
}

int findLargestNumber(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}