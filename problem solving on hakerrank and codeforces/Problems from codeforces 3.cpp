#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
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

int ABS(int a)
{
    int result = a;
    if (result < 0)
        result *= -1;

    return result;
}

string intervalSweep(int a, int b)
{
    string result = "YES";
    int temp;
    temp = ABS(a - b);
    if (temp > 1)
        result = "NO";

    else if (a == 0 && b == 0)
        result = "NO";

    return result;
}

void numbersHistogram(char c, int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= arr[i]; j++)
            cout << c;

        cout << endl;
    }


}

void shape2(int n)
{
    for (int i = 1, k = 0; i <= n; i++, k = 0)
    {
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }
        while (k != 2 * i - 1)
        {
            cout << "#";
            k++;
        }
        cout << endl;
    }
}

long addingBits(long a, long b)    //here, use the XOR bitwise operator .
{
    a = a ^ b;                     //if the two bit digits difference, return 1.
    return a;
}

void calcRangeSum(long long x, long long y)
{
    //with summation low:
    long long int sum = 0;

    long long begin, end;
    begin = MIN(x, y);
    end = MAX(x, y);
    if (begin == 1)
        sum = end * (end + 1) / 2;
    else
    {

        sum = (end * (end + 1) / 2) - (begin * (begin + 1) / 2);
        sum += begin;
    }

    cout << sum << endl;
}

void createNewString(string s1, string s2)
{
    cout << s1.length() << " " << s2.length() << endl;
    cout << s1 << " " << s2;
}

int marathon(int a, int b, int c, int d)
{
    int result = 0;

    if (b > a)
        result++;

    if (c > a)
        result++;
    
    if (d > a)
        result++;

    return result;
}

void SWAP(int& a, int& b)
{
    int temp;
    temp = a; 
    a = b;
    b = temp;
}

int gcd(int x, int y) 
{
    int a, b;
    a = MAX(x, y);
    b = MIN(x, y);

    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void easyFibo(int no)
{
    if (no == 1)
        cout << 0;

    else if (no == 2)
        cout << 0 << " " << 1;

    else
    {
        int counter = 3;
        int x = 0, y = 1, z = 0;
        cout << x << " " << y;
        while (counter <= no)
        {
            z = x + y;
            cout << " " << z;
            x = y;
            y = z;
            counter++;
        }
    }
}

void hulk(int v)
{
   /* if (v == 1)
        cout << "I hate it";
    else if (v == 2)
        cout << "I hate that I love it";*/
    //else
    //{
        int counter = 1;
        while (counter <= v)
        {
            //if even
            if (counter % 2 == 0)
                cout << "I love ";
            //if odd
            else
                cout << "I hate ";

            if (counter == v)
                cout << "it";
            else
                cout << "that ";
            
            counter++;
        }


    //}
}

long long someOfOdd(int a, int b)
{
    long long result = 0;
    int x, y;
    x = MIN(a, b);
    y = MAX(a, b);
    if (x % 2 == 0)
    {
        //if even number.
        x++;
        for (int i = x; i < y; i += 2)
        {
                result += i;
        }
    }
    else
    {
        //if odd number.
        for (int i = x+2; i < y; i += 2)
        {
            result += i;
        }
    }
    return result;
}

void sequenceOfNumbersAndSum(int a, int b)
{
    if (a > 0 && b > 0)
    {
        int x = 0, y = 0;
        long sum = 0;
        x = MIN(a, b);
        y = MAX(a, b);

        for (int i = x; i <= y; i++)
        {
            cout << i << " ";
            sum += i;
        }

        cout << "sum =" << sum;
    }
}




//main function
int main()
{
    
    
    return 0;
}
