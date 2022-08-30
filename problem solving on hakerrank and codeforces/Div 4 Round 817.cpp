#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <iomanip>
#include <cmath>
using namespace std;

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

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

string spellCheck(string s, string testCase, int M)
{

    string result = "YES";
    const int length = 10;
    int L = 0;
    L = s.length();
    char n1[length], n2[length];
    if (L != M)
        result = "NO";
    else
    {
        
        for (int i = 0; i < L; i++)
        {

            n1[i] = s[i];
            n2[i] = testCase[i];
        }
        bubbleSort(n1, L);
        bubbleSort(n2, M);
        for (int i = 0; i < L; i++)
        {
            if (n1[i] < 97 && n2[i] != 'T')
            {
                result = "NO";
                break;
            }
            else if (n1[i] != n2[i] && n1[i] != n2[i] + 32 && n1[i] != n2[i] - 32 )
            {
                result = "NO";
                break;
            }
        }
    }
    return result;
}

string colourBlindness(string row1, string row2, int n)
{
    string result = "YES";
    for (int i = 0; i < n; i++)
    {
        if (row1[i] == row2[i] || (row1[i] == 'G' && row2[i] == 'B') || (row1[i] == 'B' && row2[i] == 'G'))
            continue;
        else
        {
            result = "NO";
            break;
        }
    }

    return result;
}

int main()
{
    fast();
    
    return 0;
}