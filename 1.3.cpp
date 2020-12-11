#include <iostream>    

void findDivider(int n)
{
    for (int i=1; i < n; i++)
    {
        if (n % i == 0)
        {
            std::cout << i << " ";
        }
    }
    std::cout <<  "\n";
}

int main()                          
{                                 
    int n;
    std::cout << "Input N: ";
    std::cin >> n;
    findDivider(n);
    return 0;                   
}  