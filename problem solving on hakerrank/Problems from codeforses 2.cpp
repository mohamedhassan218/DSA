#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

void printToNRecursion(int n)
{
    if (n == 1)
        cout << n << endl;
    else
    {
        printToNRecursion(n - 1);
        cout << n << endl;
    }
}

void factorial(long long  arr[], int N)
{
    long long  myArr[N];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 0 || arr[i] == 1)
            myArr[i] = 1;
        else
        {
            myArr[i] = 1;
            for (int j = 1; j <= arr[i]; j++)
                myArr[i] *= j;
        }
    }

    for (int i = 0; i < N; i++)
        cout << myArr[i] << endl;
}

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
    else if (l1 == r2)
        cout << l1 << " " << l1;
    else if (r1 == l2)
        cout << r1 << " " << r1;
    else
        cout << "-1";
}

string onePrime(int n)
{
    string result = "YES";

    if (n >= 2)
    {
        for (int i = 3; i < n; i++)
        {
            if (n > 3)
            {
                if (n % i == 0)
                    result = "NO";
            }
        }
    }
    else
        result = "NO";


    return result;
}

void divisors(int N)
{
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
            cout << i << endl;
    }

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

void palindrome(string n)
{
    int len;
    len = n.length();
    bool firstZeroChecker = 1, identicalChecker = 1;
    for (int i = 0, j = len - 1; i < len, j >= 0; i++, j--)
    {
        if (n[j] != '0')
            firstZeroChecker = 0;

        if (n[i] != n[j])
            identicalChecker = 0;

        if (n[j] == '0' && firstZeroChecker == true)
            continue;

        cout << n[j];
    }

    if (identicalChecker)
        cout << endl << "YES";
    else
        cout << endl << "NO";
}

void wayTooLongWords(string arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        int lengthOfString = arr[i].length();
        if (lengthOfString <= 10)
            cout << arr[i] << endl;
        else
        {
            cout << arr[i][0] << lengthOfString - 2 << arr[i][lengthOfString - 1] << endl;
        }
    }

}

int elephant(int distance)
{
    int result = 0, fraction;

    result = distance / 5;
    fraction = distance % 5;
    if (fraction)
        result++;

    return result;
}

void primesToN(int n)
{
    bool check;

    if (n == 2)
        cout << 2;
    else
    {
        cout << 2 << " ";
        
        //loop to check every number from 3 to N.
        for (int i = 3; i <= n; i++)
        {
            check = true;

            //loop to check if the number is prime or not
            for (int j = 2; j <= n; j++)
            {
                if ((i % j == 0 && i != j))
                {
                    check = false;
                    break;
                }
            }
            if (check)
                cout << i << " ";
        }
    }
}

string word(string w)
{
    string result;
    int len;
    len = w.length();
    int upper = 0, lower = 0;

    for (int i = 0; i <= len - 1; i++)
    {
        if (w[i] >= 97 && w[i] <= 122)
            lower++;
        else
            upper++;
    }
    
    if (lower >= upper)
    {
        for (int i = 0; i < len - 1; i++)
        {
            if(w[i] < 97)
                w[i] += 32;
        }
    }
    else
    {
        for (int i = 0; i < len - 1; i++)
        {
            if (w[i] >= 97)
                w[i] -= 32;
        }
    }

    result = w;

    return result;
}

void shape1(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
            cout << "*";
        cout << endl;
    }
}

void digits(string stringArray[], int N)
{
    int length = 0;
    for (int i = 0; i < N; i++)
    {
        length = stringArray[i].length();
        for (int j = length - 1; j >= 0; j--)
            cout << stringArray[i][j] << " ";

        cout << endl;
    }
}

string wordCaptilization(string s)
{
    string result = s;
    if (result[0] >= 97 && s[0] <= 122)
        result[0] -= 32;

    return result;
}


//main function
int main()
{
  

    return 0;
}
