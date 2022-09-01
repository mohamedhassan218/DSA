#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
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

void SWAP(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int N)
{
    for (int j = 0; j < N - 1; j++)
    {
        for (int i = 0; i < N - j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
                SWAP(arr[i], arr[i + 1]);
        }
    }

}

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int count(string s)
{
    int digit = 0, result = 0, length = 0;
    length = s.length();
    for (int i = 0; i < length; i++)
    {
        digit = s[i] - '0';
        result += digit;
    }

    return result;
}

string searchInMatrix(int arr[][100], int N, int M, int X)
{
    string result = "will take number";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] == X)
            {
                result = "will not take number";
                break;
            }
        }
    }
    return result;
}

int matrix(int arr[][100], int N)
{
    int mainDig = 0, secDig = 0, result = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                mainDig += arr[i][j];
            if (i + j == N - 1)
                secDig += arr[i][j];
        }
    }

    result = mainDig - secDig;
    return ABS(result);
}

void mirrorArray(int arr[][100], int M, int N)
{
    //M the rows, N the columns:
    for (int i = 0; i < M; i++)//looping on each row:
    {
        for (int j = 0, k = N - 1; j < N / 2; j++, k--)//two variables from the two sides
        {                                              //iterating to the half of the columns (N/2)
            SWAP(arr[i][j], arr[i][k]);
        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

string yesOrYes(string s)
{
    string result = "NO";
    if (s == "YES")
        result = "YES";
    else if (s == "YEs")
        result = "YES";
    else if (s == "Yes")
        result = "YES";
    else if (s == "yes")
        result = "YES";
    else if (s == "yeS")
        result = "YES";
    else if (s == "yES")
        result = "YES";
    else if (s == "YeS")
        result = "YES";
    else if (s == "yEs")
        result = "YES";

    return result;
}

void icpcBallons(int n, string s)
{
    bool arr[26] = {false};//all values are false
    //if U write this: bool arr[26] = {true};
    //only the first value will be true and the rest values are set to false.
    int ballons = 0;
    for (int i = 0; i < n; i++)//looping on the string chars:
    {
        int indxOfProblem = 0;
        indxOfProblem = s[i] - 'A';//0 
        if (!arr[indxOfProblem])//check if this is the first accept:
        {
            ballons++;
            arr[indxOfProblem] = true;//arr[0] = 0
        }

    }
    ballons += n;
    cout << ballons << endl;
}

void shiftZeros(int arr[], int N)
{
    for (int i = 0; i < N - 1; i++)//same idea of bubble sort:
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (arr[j] == 0)
                SWAP(arr[j], arr[j + 1]);
        }

    }

    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
}

string powerOfTwo(long long n)
{
    string result = "NO";
    long double N = log2(n);
    if (N - (long)N == 0)
        result = "YES";

    return result;
}

string primeChecking(long n)
{
    string result = "YES";
    if (n == 1)
        result = "NO";
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                result = "NO";
                break;
            }
        }
    }
    return result;
}

string conversion(string s)
{
    int len = 0;
    len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == ',')
            s[i] = ' ';
        else if (s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
        else if (s[i] <= 90 && s[i] >= 65)
            s[i] += 32;
    }

    return s;
}

string wonderfulNumber(int N)
{
    string result = "YES", binaryRepresentation = " ";
    int m = 0;
    if (N % 2 == 0)
        result = "NO";
    else
    {
        while (N)
        {
            m = N % 2;
            if (m)
                binaryRepresentation += '1';
            else
                binaryRepresentation += '0';
            N /= 2;
        }
        int len;
        len = binaryRepresentation.length();
        for (int i = 1, j = len - 1; i < len; i++, j--)
        {
            if (binaryRepresentation[i] != binaryRepresentation[j])
            {
                result = "NO";
                break;
            }
        }
    }

    return result;
}

string goodOrBad(string s)
{
    string result = "Bad";
    int length = 0;
    length = s.length();
    for (int i = 0; i < length - 2; i += 2)
    {
        if (s[i] == '0' && s[i + 1] == '1' && s[i+2] == '0')
        {
            result = "Good";
            break;
        }
        else if(s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')
        {
            result = "Good";
            break;
        }
    }

    return result;
}



//main function
int main()
{
    fast();
    

    return 0;
}
