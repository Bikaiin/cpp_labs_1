#include <iostream>              

int fingMax(int n1, int n2, int n3)
{
    int max = n1;
    if (max < n2)
        max = n2;
    if (max < n3)
        max = n3;
    return max;
}

int main()                          
{                                 
    int n;
    std::cout << "Input N1: ";
    std::cin >> n;
    int n1;
    std::cout << "Input N2: ";
    std::cin >> n1;
    int n2;
    std::cout << "Input N3: ";
    std::cin >> n2;
    std::cout <<fingMax(n, n1, n2);
    return 0;                   
}  