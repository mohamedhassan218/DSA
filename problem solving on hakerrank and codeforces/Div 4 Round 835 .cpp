#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <iomanip>
#include <cmath>
using namespace std;


void SWAP(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
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

void SWAP(char& a, char& b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
}

void bubbleSort(char arr[], int N)
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

int meduimNumber(int x, int y, int z)
{
    int res;
    if (x > y && x < z)
        res = x;
    else if (x < y && x > z)
        res = x;
    else if (y > x && y < z)
        res = y;
    else if (y < x && y > z)
        res = y;
    else if (z > y && z < x)
        res = z;
    else if (z < y && x < z)
        res = z;


    return res;
}

int Atiilia(string s, int l)
{
    int res;
    int arr[26] = { 0 };
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
    }
    for (int i = 25; i >= 0; i--)
    {
        if (arr[i] > 0)
        {
            res = i + 1; break;
        }

    }

    return res;
}

void advantage(int arr[], int l)
{
    int myArr[l];
    for (int i = 0; i < l; i++)
        myArr[i] = arr[i];
    sort(myArr, myArr + l);
    for (int i = 0; i < l; i++)
    {
        int indx = binarySearch(myArr, 0, l - 1, arr[i]);
        if (indx == l - 1)
        {
            cout << myArr[l - 1] - myArr[l - 2] << " ";
        }
        else
        {
            cout << arr[i] - myArr[l - 1] << " ";
        }
    }
    cout << endl;
}

//main function
int main()
{
    fast();

    return 0;
}
