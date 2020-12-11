#include <iostream>              

int findlcm(int n1, int n2)
{
    int lcm = 2;
    while (lcm != n1 || lcm != n2) {
        if (n1 % lcm == 0 && n2 % lcm == 0)
            return lcm;
        lcm++;
    }
    return 0;
}

int main()                          
{                                 
     int n;
    std::cout << "Input N1: ";
    std::cin >> n;
    int n1;
    std::cout << "Input N2: ";
    std::cin >> n1;
    std::cout << findlcm(n, n1);
    return 0;                   
}  