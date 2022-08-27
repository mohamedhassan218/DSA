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



//main function
int main()
{
    fast();
    int arr[7] = { 1 ,2 ,0 ,4 ,0 ,5 ,6 };
    reversing(arr, 7);
    
    
   
    return 0;
}
