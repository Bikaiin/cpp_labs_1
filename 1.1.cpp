#include <iostream>     

void printReversed(int n)
{
    int d = 10;
    while(n!=0)
    {
        std::cout << n % d << "\n";
        n /= d;
    } 
}

int main()                          
{                                 
    int n;
    std::cout << "Input N: ";
    std::cin >> n;
    printReversed(n);
    return 0;                   
}  