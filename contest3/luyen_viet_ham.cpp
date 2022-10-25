#include <bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int sumOfDigit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int sumOfEvenDigit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit % 2 == 0)
            sum += digit;
        n /= 10;
    }
    return sum;
}
int sumOfPrimeDigit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
            sum += digit;
        n /= 10;
    }
    return sum;
}
int Reverse(int n)
{
    int rev = 0, temp = n;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
int primeDivisor(int n)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n != 1)
        cnt++;
    return cnt;
}
int maxOfPrimeDivisor(int n)
{
    int temp;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            temp = i;
        }
    }
    if (n != 1)
        return n;
    else
        return temp;
}
int atLeast(int n)
{
    while (n > 0)
    {
        int digit = n % 10;
        if (digit == 6)
            return 1;
        n /= 10;
    }
    return 0;
}
int divisibleBy8(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    if (sum % 8 == 0)
        return 1;
    return 0;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int factorialOfDigit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int a = n % 10;
        sum += factorial(a);
        n /= 10;
    }
    return sum;
}
int creatBy1Num(int n)
{
    int temp = n % 10;
    n = n / 10;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit != temp)
            return 0;
        n /= 10;
    }
    return 1;
}
int lastDigit(int n)
{
    int temp = n % 10;
    n = n / 10;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit > temp)
            return 0;
        n /= 10;
    }
    return 1;
}
int numOfDigit(int n)
{
    int cnt = 0;
    while (n)
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}
int sumOfPow(int n)
{
    int temp = numOfDigit(n);
    int sum = 0;
    while (n > 0)
    {
        int a = n % 10;
        sum += pow(a, temp);
        n /= 10;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << isPrime(n) << endl
         << sumOfDigit(n) << endl
         << sumOfEvenDigit(n) << endl;
    cout << sumOfPrimeDigit(n) << endl
         << Reverse(n) << endl
         << primeDivisor(n) << endl;
    cout << maxOfPrimeDivisor(n) << endl
         << atLeast(n) << endl
         << divisibleBy8(n) << endl;
    cout << factorialOfDigit(n) << endl
         << creatBy1Num(n) << endl
         << lastDigit(n) << endl
         << sumOfPow(n);
    return 0;
}
