#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <iomanip>
#include <cmath>
using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int ABS(int a)
{
    int result = a;
    if (result < 0)
        result *= -1;
 
    return result;
}
 
long long MIN(long long a, long long b)
{
    long long res;
    if (a < b)
        res = a;
    else
        res = b;
 
    return res;
}
 
/////////////////////////
//PROBLEMS      :)
void winterSale(float percent, float price)
{
    float totalPrice = 0;
    totalPrice = (percent * price) / (100 - percent);
    totalPrice += price;
    cout << totalPrice;
}

void memoAndMomo(long long a, long long b, long long k)
{
    if (a % k != 0 && b % k != 0)
    {
        cout << "No One";
    }
    else if(a % k == 0 && b % k == 0)
    {
        cout << "Both";
    }
    else if (a % k == 0)
    {
        cout << "Memo";
    }
    else
    {
        cout << "Momo";
    }
}

void nextChar(char c)
{
    if (c == 122)
    {
        cout << 'a';
    }
    else
    {
        cout << ++c;
    }
}

void AliBabaAndPuzzles()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if(a + b -c ==d){cout << "YES";}
    else if(a + b * c == d){cout << "YES";}
    else if(a - b * c == d){cout << "YES";}
    else if(a - b + c == d){cout << "YES";}
    else if(a * b + c == d){cout << "YES";}
    else if(a * b - c == d){cout << "YES";}
    else{cout << "NO";}
}

string intervalSweep(int a, int b)
{
    string result = "YES";
    int temp;
    temp = ABS(a - b);
    if (temp > 1)
        result = "NO";
    
    else if(a == 0 && b == 0)
        result = "NO";
 
    return result;
}
 
long addingBits(long a, long b)
{
    a = a ^ b;
    return a;
}

long long katryoshka(long long n, long long m, long long k)
{
    long long result = 0;
    result = MIN(n, m);
    result = MIN(result, k);
    n -= result;
    m -= result;
    k -= result;
 
    result += MIN(n / 2, k);
 
 
    return result;
}

void dataTypeGuessing(double a, double k, double n)
{
    double result;
    result = (a * k) / n;
    long long myNumber = result;
    double myFraction = result - myNumber;
    if (myFraction != 0)
    {
        cout << "double";
    }
    else if (myNumber <= 2147483647)
    {
        cout << "int";
    }
    else
    {
        cout << "long long";
    }
 
}

void luckyNumbers(int xy)
{
    int x = xy % 10;
    int y = xy / 10;
 
    if (x % y == 0)
    {
        cout << "YES";
    }
    else if (y % x == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    fast();

    return 0;
}
