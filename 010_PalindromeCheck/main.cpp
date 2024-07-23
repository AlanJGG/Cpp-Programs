#include <iostream>
#include <string>

bool isPalindrome(std::string);

int main(void)
{
    std::string word;
    std::cout << "Escriba una palabra para determinar si es palíndroma: ";
    std::cin >> word;
    std::cout << word << (isPalindrome(word) ? " es palíndroma." : " no es palíndroma.") << std::endl;

    return 0;
}

bool isPalindrome(std::string word)
{
    std::string inversedWord;

    for (std::string::reverse_iterator it = word.rbegin(); it != word.rend(); ++it)
        inversedWord += *it;

    return (word == inversedWord);
}