#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;


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

string lastDigit(int number)
{
    string result = "ODD";

    number %= 1000;
    number %= 100;
    number %= 10;
    number %= 2;
    if (number == 0)
        result = "EVEN";

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

string watermelon(int weight)
{
    string result = "NO";

    if (weight > 3)
    {
        weight %= 2;
        if (weight == 0)
            result = "YES";
    }
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

void oneToN(int no)
{
    for (int i = 1; i <= no; i++)
    {
        cout << i << endl;
    }
}

void evenNumbers(int number)
{
    if (number >= 2)
    {
        for (int i = 2; i <= number; i += 2)
        {
            cout << i << endl;
        }
    }
    else
        cout << "-1";
}

void evenOddPosNeg(int numberOfVariables)
{
    int positive = 0, negative = 0, even = 0, odd = 0, var = 0;
    cin >> numberOfVariables;
    for (int i = 1; i <= numberOfVariables; i++)
    {
        cin >> var;
        if (var > 0)
            positive++;
        else if (var < 0)
            negative++;

        var %= 2;
        if (var == 0)
            even++;
        else
            odd++;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
}    //code this directly in the main function

long timonAndPompa(long a, long b)
{
    long result = 0;

    if (a > b)
        result = a - b;

    return result;
}

void pyramid(int io)
{
    for (int i = 1; i <= io; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void multiplicationTable(int number)
{
    for (int i = 1; i <= 12; i++)
    {
        cout << number << " * " << i << " = " << number * i << endl;
    }

}

void fixedPassword()
{
    bool whileKey = true;
    string password = " ";
    while (whileKey)
    {
        cin >> password;
        if (password == "1999")
        {
            cout << "Correct";
            whileKey = false;
        }
        else
            cout << "Wrong";
    }

}//code this in the main function

long MAX(int no)
{
    long maxi = 0, vari = 0;
    for (int i = 1; i <= no; i++)
    {
        cin >> vari;
        if (vari > maxi)
        {
            maxi = vari;
        }
    }
    return maxi;
}//this code in the main function

long long summation(long arr[], int n)
{
    long long result = 0;
    for (int i = 0; i < n; i++)
    {
        result += arr[i];
    }
    result = abs(result);
    return result;
}

void lucky(string myNumbers[], int testCases)
{
    int left3 = 0, right3 = 0;
    for (int i = 0; i < testCases; i++)
    {
        left3 = myNumbers[i][0] + myNumbers[i][1] + myNumbers[i][2];
        right3 = myNumbers[i][3] + myNumbers[i][4] + myNumbers[i][5];
        if (left3 == right3)
            myNumbers[i] = "YES";
        else
            myNumbers[i] = "NO";
    }

    for (int i = 0; i < testCases; i++)
    {
        cout << myNumbers[i] << endl;
    }

}

void lastTwoDigits(int a, int b, int c, int d)
{
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    
    a = a * b * c * d;
    a %= 100;

    if (a < 10)
        cout << 0 << a;
    else
        cout << a;

}


int main()
{
    

    return 0;
}
