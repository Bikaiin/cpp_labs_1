#include <iostream>              

int countNubLen(int n){
    int res = 0;
    while(n!=0)
    {
        n /= 10;
        res++;
    } 
    return res;
}

int main()                          
{                                 
    int n;
    std::cout << "Input N: ";
    std::cin >> n;
    std::cout <<countNubLen(n);
    return 0;                   
}  