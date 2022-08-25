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

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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

void NTimes(int n, char c)
{
    for (int i = 1; i <= n; i++)
        cout << c << " ";
}

void average(double arr[], int N)
{
    double result = 0.0;
    double sum = 0;
    for (int i = 0; i < N; i++)
        sum += arr[i];

    double temp = (double)N;
    cout << setprecision(8) << sum / temp;
}

void frequencyArray(int arr[], int N, int M)
{
    //M = 5, N = 10, {1,2,3,4,5,3,2,1,5,3}.
    int myArr[M + 1] = { 0 }; //{0,0,0,0,0,0}
    int var = 0;
    for (int i = 0; i < N; i++)
    {
        var = arr[i]; // 1                  //2
        myArr[var]++; // {0,1,0,0,0,0}    //{0,1,1,0,0,0}
    }

    for (int i = 1; i <= M; i++)
        cout << myArr[i] << endl;
}

string palindrome(string s)
{
    string result = "YES";

    int length = 0;
    length = s.length();
    for (int i = 0, j = length - 1; i < length, j >= 0; i++, j--)
    {
        if (s[i] != s[j])
        {
            result = "NO";
            break;
        }
    }

    return result;
}

void minAndMax(int arr[], int N)
{
    bubbleSort(arr, N);
    cout << arr[0] << " " << arr[N - 1];
}

void newArray(int* a, int* b, int N)
{
    int M = 2 * N;
    int finalArray[M];
    for (int i = 0; i < N; i++)
    {
        finalArray[i] = a[i];
        if (i != 0)
            finalArray[i + N] = b[i];
        else
            finalArray[N] = b[i];
    }

    for (int i = 0; i < M; i++)
        cout << finalArray[i] << " ";
}

void strings(string s1, string s2)
{
    char temp = ' ';
    int len1 = 0, len2 = 0;
    len1 = s1.length();
    len2 = s2.length();
    cout << len1 << " " << len2 << endl;
    cout << s1 + s2 << endl;
    temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
    cout << s1 << " " << s2 ;
}

int distinct(int arr[], int N)
{
    unordered_set<int> myset;
    for (int i = 0; i < N; i++)
        myset.insert(arr[i]);

    return myset.size();
}

string checkCode(int beforeDigit, int afterDigit, string CODE)
{
    string result = "Yes";
    int len = 0;
    len = CODE.length();
    int i, j;
    if (CODE[beforeDigit] == '-')
    {
        for (i = 0; i < len; i++)
        {
            if (CODE[i] == '-' && i == beforeDigit)
                continue;
            else if (CODE[i] == '-')
            {
                result = "No";
                break;
            }
            else
            {
                if (CODE[i] >= '0' && CODE[i] <= '9')
                    continue;
                else
                {
                    result = "No";
                    break;
                }
            }
        }


    }
    else
        result = "No";

    return result;
}

long long equation(long X, long N)
{
    long long sum = 0;
    if (N == 2)
    {
        sum += pow(X, N);
    }
    else if (N > 2)
    {
        for (int i = 2; i <= N; i += 2)
        {
            sum += pow(X, i);
        }
    }
    else
        sum = 0;
    return sum;
}

string prime(int n)
{
    string result = "YES";
    if (n == 1)
        result = "NO";
    else
    {
        for (int i = 2; i * i <= n; i++)//i*i <= n: to limit the number of tests
        {
            if (n % i != 0 && i != n)
            {
                result = "NO";
                break;
            }
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
