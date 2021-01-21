#include <string>
#include <iostream>
bool isPalindrome(const std::string &text)
{
    for (int i = 0; i < text.length() / 2; ++i)
    {

        if (tolower(text[i]) != tolower(text[text.length() - 1 - i]))
        {

            return false;
        }
    }
    return true;
}
int main()
{
    std::string usrInput{};
    std::cout << "Wprowadź słowo:"<< "\n";
              
    std::cin >> usrInput;

    if (isPalindrome(usrInput))
    {
        std::cout << "Jest palindromem" << "\n";
                  
    }
    else
    {
        std::cout << "Nie jest palindromem" << "\n";
                  
    }
    return 0;
}
