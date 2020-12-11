#include <iostream>              


void isSimple(int n)
{
    for (int i = 2; i <sqrt(n); i++)
    {
        if (n % i == 0) {
            std::cout << "не простое\n";
            return;
        }
    }
    std::cout << "простое\n";
}

int main()                          
{                                 
    int n;
    std::cout << "Input N: ";
    std::cin >> n;
    isSimple(n);
    return 0;                   
}  