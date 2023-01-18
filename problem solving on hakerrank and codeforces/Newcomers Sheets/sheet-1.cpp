#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

 
int MIN(int a, int b)
{
    int res;
    if (a < b)
        res = a;
    else
        res = b;
 
    return res;
}
 
int MAX(int a, int b)
{
    int res;
    if (a > b)
        res = a;
    else
        res = b;
    
    return res;
}
 

////////////////////////////
//PROBLEMS  :)

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

void twoNumbers(float x, float y)
{
    float result = x / y;      //7.7
    int intResult = x / y;     //7
    float fraction = result - intResult;  //.7
    float ceilFraction;
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

void maxAndMin(int a, int b, int c)
{
    int maximum = 0, minimum = 0;

    maximum = a;
    minimum = a;

    if (maximum > b)
    {
        if (maximum <= c)
        {
            maximum = c;
            minimum = b;
        }
        else if (maximum > c)
        {
            maximum = a;
            if (c < b)
            {
                minimum = c;
            }
            else
            {
                minimum = b;
            }
        }
    }
    else if (maximum <= b)
    {
        maximum = b;
        if (maximum <= c)
        {
            maximum = c;
            minimum = a;
        }
        else if (maximum > c)
        {
            maximum = b;
            if (c < a)
            {
                minimum = c;
            }
            else 
            {
                minimum = a;
            }
        }
    }

    cout << maximum << " " << minimum;
}

string brothers(string lastName1, string lastName2)
{
    string result = "NOT";
    if (lastName1 == lastName2)
    {
        result = "ARE Brothers";
    }
    return result;
}

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

char lowerUpperChar(char c)
{
    
    if (c <= 90 && c >= 65)  //c in upper case:
    {
        c += 32;
    }
    else if (c <= 122 && c >= 97)
    {
        c -= 32;
    }
    return c;
}

long calculator(int a, int b, char c)
{
    long result;
    if (c == '+')
    {
        result = a + b;
    }
    else if (c == '-')
    {
        result = a - b;
    }
    else if (c == '*')
    {
        result = a * b;
    }
    else
    {
        result = a / b;
    }
    return result;
}

string firstDigit(int number)
{
    string result = "ODD";
    number /= 1000;
    number %= 2;
    if (number == 0)
        result = "EVEN";

    return result;
}

string coordinatesOfPoint(double  x, double  y)
{
    string result = "Origem";
    if (x == 0 && y == 0)
        result = "Origem";
    else if (x != 0 && y == 0)
        result = "Eixo X";
    else if (y != 0 && x == 0)
        result = "Eixo Y";
    else if (x > 0 && y > 0)
        result = "Q1";
    else if (x > 0 && y < 0)
        result = "Q4";
    else if (x < 0 && y >0)
        result = "Q2";
    else if (x < 0 && y < 0)
        result = "Q3";

    return result;
}

void ageInDays(long days)
{
    int years = days / 365;
    days %= 365;
    int months = days / 30;
    days %= 30;
    
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;
}

string interval(float fNumber)
{
    string result = " ";
    if (fNumber >= 0 && fNumber <= 100)
    {
        if (fNumber >= 0 && fNumber <= 25)
            result = "Interval [0,25]";
        else if (fNumber > 25 && fNumber <= 50)
            result = "Interval (25,50]";
        else if (fNumber > 50 && fNumber <= 75)
            result = "Interval (50,75]";
        else
            result = "Interval (75,100]";
    }
    else
        result = "Out of Intervals";

    return result;
}

void sortNumbers(int a, int b, int c)
{
    int maxi = 0, mini = 0, inter = 0 ;
    if (a < b)
    {
        if (a < c)
        {
            mini = a;
            if (b < c)
            {
                maxi = c;
                inter = b;
            }
            else
            {
                inter = c;
                maxi = b;
            }
        }
        else
        {
            mini = c;
            inter = a;
            maxi = b;
        }
    }
    else
    {
        if (b < c)
        {
            mini = b;
            if (c < a)
            {
                inter = c;
                maxi = a;
            }
            else
            {
                inter = a;
                maxi = c;
            }
        }
        else
        {
            inter = b;
            maxi = a;
            mini = c;
        }
    }
    cout << mini << endl << inter << endl << maxi << endl;
    cout << a << endl << b << endl << c ;
}

void floatOrInt(float fNumber)
{
    int intNumber;
    intNumber = fNumber;
    float fraction;
    fraction = fNumber - intNumber;

    if (fraction == 0)
    {
        cout << "int " << intNumber;
    }
    else
    {
        cout << "float " << intNumber << " " << fraction;
    }

}

string comparision(float a, float b, char c)
{
    string result = " ";
    if (c == '=')
    {
        if (a == b)
            result = "Right";
        else
            result = "Wrong";
    }
    else if (c == '<')
    {
        if (a < b)
            result = "Right";
        else
            result = "Wrong";
    }
    else if (c == '>')
    {
        if (a > b)
            result = "Right";
        else
            result = "Wrong";
    }
    return result;
}

void mathematicalExpression(float a, char sign, float b, char equalSign, float c)
{
    if (sign == '+')
    {
        if (c == a + b)
            cout << "Yes";
        else
        {
            c = a + b;
            cout << c;
        }
    }
    else if (sign == '-')
    {
        if (c == a - b)
            cout << "Yes";
        else
        {
            c = a - b;
            cout << c;
        }
    }
    else if (sign == '*')
    {
        if (c == a * b)
            cout << "Yes";
        else
        {
            c = a * b;
            cout << c;
        }
    }

}

void twoInterval(int l1, int r1, int l2, int r2)
{
    if (l1 == l2 && r1 == r2)
        cout << l1 << " " << r1;
    else if (l1 == l2)
        cout << l1 << " " << MIN(r1, r2);
    else if (r1 == r2)
        cout << MAX(l1, l2) << " " << r1;
    else if (l1 > l2 && l1 < r2)
        cout << l1 << " " << MIN(r1, r2);
    else if (l2 > l1 && l2 < r1)
        cout << l2 << " " << MIN(r1, r2);
    else if (l2 > l1 && l2 < r1 && r2 > l1 && r2 < r1)
        cout << l2 << " " << r2;
    else if (l1 > l2 && l1 < r2 && r1 > l2 && r1 < r2)
        cout << l1 << " " << r1;
    else if (l1 == r2 )
        cout << l1 << " " << l1;
    else if (r1 == l2)
        cout << r1 << " " << r1;
    else
        cout << "-1";
}
 
int lastTwoDigits(int a, int b, int c, int d)
{
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    
    a = a * b * c * d;
    a %= 100;
    
    if(a < 10)
        cout << 0 << a;
    else
        cout << a;
 
    return a;
}

string hardCompare(long long a, long long b, long long c, long long d)
{
    string result = "NO";
    double y, z;
    y = log(a) * b;
    z = log(c) * d;
    if (y > z)
        result = "YES";
 
    return result;
}


//main:
int main()
{
    
    
    return 0;
}
