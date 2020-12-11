#include <iostream>    

void print(int n)
{
    int d = 10;
    while(n / d != 0)
    {
        d *= 10;
    } 

    for (int i = d /10; i > 0; i/=10)
    {
        std::cout << n / i << "\n"; 
        n %= i ;
    }
}

int main()                          
{                                 
    int n;
    std::cout << "Input N: ";
    std::cin >> n;
    print(n);
    return 0;                   
}  
