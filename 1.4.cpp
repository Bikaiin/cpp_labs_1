#include <iostream>              

void printLine(int n)
{
    for (int i = 0;  i < n; i++)
    {
        std::cout << "-";
    }
}

int main()                          
{                                 
    int n;
    std::cout << "Input N: ";
    std::cin >> n;
    printLine(n);
    return 0;                   
}  