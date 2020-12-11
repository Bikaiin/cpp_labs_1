#include <iostream>              

int factorial(int n)
{
    int result = 1;
    for(int i = 1; i <=n; i++)
    {
        result *= i;
    }
    return result;
}

int factorialRecursion(int n)
{
    if(n>1)
        return n * factorialRecursion(n-1);
    return 1;
}

int main()                          
{                                 
    int n;
    std::cout << "Input N: ";
    std::cin >> n;
    
    std::cout <<factorial(n) << "\n";
    std::cout <<factorialRecursion(n) << "\n";
    return 0;                   
}  