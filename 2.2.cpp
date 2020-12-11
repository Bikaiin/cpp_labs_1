#include <iostream>              

struct MinMax
{
     int min;
     int max;
};

MinMax findMinMax(int n1, int n2, int n3)
{
    MinMax result = {n1, n1};
    if (result.max < n2)
        result.max = n2;

    if (result.min > n2) 
        result.min = n2;

    if (result.max < n3)
        result.max = n3;

    if (result.min > n3)  
        result.min = n3;
    return result;
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
    MinMax z = findMinMax(n, n1, n2);
    std::cout << z.min << " " << z.max ;
    return 0;                   
}  