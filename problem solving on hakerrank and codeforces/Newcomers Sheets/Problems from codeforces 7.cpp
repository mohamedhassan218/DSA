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

int binarySearch(int arr[], int firstIndx, int lastIndx, int x)
{
    while (firstIndx <= lastIndx) 
    {
        int middleIndx = firstIndx + (lastIndx - firstIndx) / 2;

        if (arr[middleIndx] == x)
            return middleIndx;
        if (arr[middleIndx] < x)
            firstIndx = middleIndx + 1;
        else
            lastIndx = middleIndx - 1;
    }
    return -1;
}

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

string translation(string s, string t)
{
    string result = "YES";
    int l1, l2;
    l1 = s.length();
    l2 = t.length();

    if (l1 == l2)
    {
        for (int i = 0, j = l1 - 1; i < l1; i++, j--)
        {
            if (s[i] != t[j])
            {
                result = "NO";
                break;
            }
        }
    }
    else
        result = "NO";

    return result;
}

int bearAndBigBrother(int x, int y)
{
    int result = 1;
    if (x < y)
    {
        while (1)
        {
            x *= 3;
            y *= 2;
            result++;
            if (x > y)
                break;
        }
        result--;   //because we begin in 1 not 0
    }

    return result;
}

void swappingWithMatrix(int arr[][500], int N, int x, int y)
{
    //ex: x = 3, y = 1
    x--; //2
    y--; //0

    //swap row x with row y:
    for (int i = 0; i < N; i++)   //20 21 22 <> 00 01 02
        SWAP(arr[x][i], arr[y][i]);

    //swap column x with column y:
    for (int i = 0; i < N; i++)   //02 12 22 <> 00 10 20
        SWAP(arr[i][x], arr[i][y]);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int smallestPair(int arr[], int N)
{
    //N = 4
    int smallestPairv = arr[0] + arr[1] + 1;//21
    int I = 0, J = 0;
    for (int i = 0; i < N - 1; i++)//0 1 2
    {
        
        for (int j = i + 1; j < N; j++)//1 2 3
        {
            I = i + 1;//1
            J = j+1;//2
            smallestPairv = MIN(smallestPairv, arr[i] + arr[j] + J - I);
        }
    }


    return smallestPairv;
}

string friendShip(string s, int len)//from El-Azhar sheets
{
    string result = "Friendship";
    int mCounter = 0, aCounter = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'm' || s[i] == 'M')
        {
            mCounter++;
            continue;
        }
        else if (s[i] == 'a' || s[i] == 'A')
        {
            aCounter++;
            continue;
        }
    }
    if (mCounter > aCounter)
        result = "Mostafa";
    else if (aCounter > mCounter)
        result = "Ahmed";

    return result;
}

void countLetters(string s)
{
    int freq[26] = {0};
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            char c = i + 'a';
            cout << c << " : " << freq[i] << endl;
        }
    }
}

void iLoveStrings(string s1, string s2)
{
    int length1, length2, resultSize;
    length1 = s1.size();
    length2 = s2.size();
    resultSize = length1 + length2;
    for (int i = 0; i < resultSize; i++)
    {
        if (i < length1)
            cout << s1[i];
        if (i < length2)
            cout << s2[i];
    }
}

int nextRound(int arr[], int n, int k)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[k - 1] && arr[i] != 0)
            result++;
    }
    return result;
}

string binarySearch(int arr[], int n, int x)
{
    string result = "not found";

    if (binarySearch(arr, 0, n - 1, x) >= 0)
        result = "found";

    return result;
}

int team(int a, int b, int c)
{
    if (a + b + c >= 2)
        return 1;
    else
        return 0;
}

int soldierAndBananas(int k, int n, int w)
{
    //k cost for first banana
    //n dollars
    //w number of bananas he'll buy
    int result = 0;
    for (int i = 1; i <= w; i++)
    {
        result += i * k;
    }
    result -= n;
    if (result < 0)
        result = 0;
    return result;
}



//main function
int main()
{
    fast();
   
    return 0;
}
