#include <iostream>              

void printCoub(int n)
{
    for (int i = 0;  i < n; i++)
    {
        for (int j = 0;  j < n; j++)
        {
            if (0 == i || i == n - 1 || 0 == j|| j == n - 1)
            {
                std::cout << "*";
            }
            else 
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}

int main()                          
{                                 
    int n;
    std::cout << "Input N: ";
    std::cin >> n;
    printCoub(n);
    return 0;                   
}  