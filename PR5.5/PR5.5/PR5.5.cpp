#include <iostream>
using namespace std;

// Функція для обчислення суми цифр числа та глибини рекурсії
int sumDigits(int n, int& Gl) 
{
    if (n == 0)
    {
        return 0;
    }
    Gl++;  // збільшення глибини на кожному рівні рекурсії
    return n % 10 + sumDigits(n / 10, Gl);
}

int main() 
{
    int n, Gl = 0;
    cout << " Digits = ";
    cin >> n;

    int sum = sumDigits(n, Gl);

    cout << " sum " << n << " = " << sum << endl;
    cout << " Gl = " << Gl << endl;

    return 0;
}
