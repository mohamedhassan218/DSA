#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

void capitalOrSmallOrDigit(char characterFromUser)
{
    
    cin >> characterFromUser;
    if (characterFromUser >= 48 && characterFromUser <= 58)
    {
        cout << "IS DIGIT";
    }
    else
    {
        cout << "ALPHA" << endl;
        if (characterFromUser >= 65 && characterFromUser <= 91)
        {
            cout << "IS CAPITAL";
        }
        else
        {
            cout << "IS SMALL";
        }
    }

}

string kangaroo(int x1, int v1, int x2, int v2)
{
    string result = "NO";
    if (x1 == x2 && v1 == v2)
    {
        result = "YES";
    }
    else if (x1 != x2 && v1 == v2)
    {
        result = "NO";
    }
    else
    {
        for (int i = 0; i < 10000; i++)
        {
            x1 += v1;
            x2 += v2;
            if (x1 == x2)
            {
                result = "YES";
            }
        }
    }
    return result;
}

/*string kangaroo(int x1, int v1, int x2, int v2)
{
    string result;
    if ((v1 <= v2) || ((x2 - x1) % (v2 - v1)))
    {
        result = "NO";
    }
    else
    {
        result = "YES";
    }

    return result;
}*/

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
    else if (a % k == 0 && b % k == 0)
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

string aliBabaPuzzle(int a, int b, int c, long d)
{
    string result;
    /*if (a + b - c == d )
    {
        result = "YES";
    }else if (a + (b * c )== d )
    {
        result = "YES";
    }else if (a -( b * c )== d )
    {
        result = "YES";
    }else if (a - b + c == d )
    {
        result = "YES";
    }else if ((a * b) + c == d )
    {
        result = "YES";
    }else if ((a * b) - c == d )
    {
        result = "YES";
    }
    else
    {
        result = "NO";
    }*/

    if (a + b - c == d) { result = "YES"; }
    else if (a + b * c == d) { result = "YES"; }
    else if (a - b * c == d) { result = "YES"; }
    else if (a - b + c == d) { result = "YES"; }
    else if (a * b + c == d) { result = "YES"; }
    else if (a * b - c == d) { result = "YES"; }
    else { result = "NO"; }
    
    return result;
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

void sayHello(string s)
{
    cout << "Hello, " + s;
}

void basicDataType(int i, long long ll, char c, float f, double d)
{
    cout << i << endl;
    cout << ll << endl;
    cout << c << endl;
    cout << f << endl;
    cout << d << endl;
}

void simpleCalculator(long long a, long long b)
{
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
}

void difference(long long a1, long long a2, long long a3, long long a4)
{
    long long left = a1 * a2;
    long long right = a3 * a4;
    long long result;
    result = left - right;
    cout << "Difference = " << result;
}

void areaOfCircle(int raduis)
{
    float const PI = 3.141592653;
    cout << setprecision(9) << raduis * raduis * PI;
}

void digitsSummation(long long a, long long b)
{
    a %= 10;
    b %= 10;
    a += b;
    cout << a;
}

long long summation(long long n)
{
    long long result = 0;
    /*for (int i = 1; i <= n; i++)
    {
       result += i;
    }*/                                      //time limit
    result = n * (n + 1) / 2;
    return result;
}

void floorCeilRound(float x, float y)
{
    float result = x / y;      //7.7
    int intResult = x / y;     //7
    float fraction = result - intResult;  //.7
    float ceilFraction = 0;
    if (fraction > 0)
    {
        ceilFraction = 1 - fraction;
        result += ceilFraction;//.3
    }
    else if(fraction == 0)
        result += ceilFraction;    //8   

    cout << "floor " << x << " / " << y << " = " << intResult << endl;
    cout << "ceil " << x << " / " << y << " = " << result << endl;
    if (fraction == 0)
    {
        cout << "round " << x << " / " << y << " = " << intResult << endl;
    }
    else if (fraction < .5)
    {
        cout << "round " << x << " / " << y << " = " << intResult << endl;
    }
    else
    {
        intResult += 1;
        cout << "round " << x << " / " << y << " = " << intResult << endl;
    }
}

string welcomeWithConditions(int x, int y)
{
    string result = "No";
    if (x >= y)
    {
        result = "Yes";
    }
    return result;
}

string multiples(int a, int b)
{
    string result = "Multiples";
    if (a % b != 0 && b % a != 0)
    {
        result = "No Multiples";
    }

    return result;
}

//main function:
int main()
{
    
    

   
}
