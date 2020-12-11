#include <iostream>              

long gcd(long a, long b) {

    long nod = 1L;

    if (a > b) {
        long tmp = a;
        a = b;
        b = tmp;
    }

    while (a > 1L && b > 1L) {
        for (long i = 2; i <= a; i++) {
            if (a % i == 0 && b % i == 0) {
                nod *= i;
                a /= i;
                b /= i;
                break;
            }
            if (a % i == 0) {
                a /= i;
                break;
            }
            if (b % i == 0) {
                b /= i;
                break;
            }
        }
    }
    return nod;
}

int main()                          
{                                 
    int n;
    std::cout << "Input N1: ";
    std::cin >> n;
    int n1;
    std::cout << "Input N2: ";
    std::cin >> n1;
    std::cout << gcd(n, n1);
    return 0;                   
}  