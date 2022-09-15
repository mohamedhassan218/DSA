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

long long calculatingFunction(long long n)
{
    long long result = 0;
    if (n % 2 == 0)
        result = n / 2;
    else if (n % 2 == 1)
    {
        result = (n / 2) + 1;
        result *= -1;
    }
    return result;
}

int countSubarrays(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result++; //each individual item considered subarray
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j - 1] > arr[j])
                break;
            else
                result++;
        }
    }

    return result;
}

string isBSubsequence(int arr1[], int arr2[], int n, int m)
{
    string result = "YES";
    int j = 0, counter = 0;
    bool checker = false;
    for (int i = 0; i < m; i++)//looping on items of the second array
    {
        for (j; j < n; j++)//looping on the items of the first array
        {
            if (arr2[i] == arr1[j])
            {
                counter++;
                checker = 1;//if he found the item, set checker to true
                break;//break searching in the first array 
            }
        }
        if (checker == 1)//if found the item in the first array
        {
            j += 1;//the next time, he begin searching from the next item in the first array
        }
        else
            break; //if not found at least one item, break the search and says NO
    }

    if (counter != m)
        result = "NO";

    return result;
}

int minimizeNumber(int arr[], int N)
{
    int result = 0;
    bool checker = true;
    while(checker)
    {
        for (int i = 0; i < N; i++)//check if there're odd numbers
        {
            if (arr[i] % 2 != 0)
            {
                checker = 0;
                break;
            }
        }
        if (checker == 1)
        {
            result += 1;
            for (int i = 0; i < N; i++)
                arr[i] /= 2;
        }
    }

    return result;
}

void maxSubarray(int arr[], int N)
{
    int maxi = 0;
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
        maxi = arr[i];
        for (int j = i + 1; j < N; j++)
        {
            maxi = max(maxi, arr[j]);
            cout << maxi << " ";
        }
    }
}

string permutationWithArrays(int arr1[], int arr2[], int N)
{
    string result = "yes";
    sort(arr1, arr1 + N);
    sort(arr2, arr2 + N);
    for (int i = 0; i < N; i++)
    {
        if (arr1[i] != arr2[i])
        {
            result = "no";
            break;
        }
    }

    return result;
}

string neighbor8(char arr[][100], int N, int M, int X, int Y)
{
    string result = "yes";
    int i = X - 1;
    int j = Y - 1;
    bool checker = false;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] != 'x')
            {
                checker = true;
                break;
            }
        }
    }
    if (checker)
    {
        if (X == 1 || X == N || Y == 1 || Y == M)
            result = "no";
        else
        {
            if (arr[i - 1][j - 1] != 'x' ||
                arr[i - 1][j] != 'x' ||
                arr[i - 1][j + 1] != 'x' ||
                arr[i][j - 1] != 'x' ||
                arr[i][j + 1] != 'x' ||
                arr[i + 1][j - 1] != 'x' ||
                arr[i + 1][j] != 'x' ||
                arr[i + 1][j + 1] != 'x')
                result = "no";
        }
    }

    return result;
}

string kokoAndTransformation(int arr1[], int N, int arr2[], int M)
{
    int sum1 = 0, sum2 = 0;
    string result = "Yes";
    for (int i = 0; i < N; i++)
        sum1 += arr1[i];
    for (int i = 0; i < M; i++)
        sum2 += arr2[i];

    if (sum1 != sum2)
        result = "No";

    return result;
}

void shifrRight(int arr[], int N, int X)
{
    int times = X % N;
    if (times == 0)
    {
        for (int i = 0; i < N; i++)
            cout << arr[i] << " ";
    }
    else
    {
        for (int i = N - times; i < N; i++)
            cout << arr[i] << " ";
        for (int i = 0; i < N - times; i++)
            cout << arr[i] << " ";
    }
}

//we'll use it in the fiveInOne function:
string prime(int n)
{
    string result = "YES";
    if (n == 1 || n == 0)
        result = "NO";
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0 && i != n)
            {
                result = "NO";
                break;
            }
        }
    }
    return result;
}
//we'll use it in the fiveInOne function:
bool palindrome(int N)
{
    bool result = 1;
    if (N > 9)
    {
        int reversed = 0, temp = 0;
        temp = N;
        while (temp)
        {
            reversed = reversed * 10 + temp % 10;
            temp /= 10;
        }
        if (reversed != N)
            result = 0;
    }
    return result;
}
//we'll use it in the fiveInOne function:
int countDivisor(int number)
{
    int cntr = 0, temp = number / 2;
    for (int i = 1; i <= temp; i++)
    {
        if (number % i == 0)
            cntr++;
    }
    return cntr;
}

void fiveInOne(int arr[], int N)
{
    sort(arr, arr + N);
    int totalPrime = 0;
    int totalPalindrome = 0;
    int indxOfMaxDivisors = 0;
    int maxTemp = countDivisor(arr[0]);
    for (int i = 0; i < N; i++)
    {
        string result = prime(arr[i]);
        if (result == "YES")
            totalPrime++;
        if (palindrome(arr[i]))
            totalPalindrome++;
        if (maxTemp <= countDivisor(arr[i]))
        {
            maxTemp = countDivisor(arr[i]);
            indxOfMaxDivisors = i;
        }

    }

    cout << "The maximum number : " << arr[N - 1] << endl;
    cout << "The minimum number : " << arr[0] << endl;
    cout << "The number of prime numbers : " << totalPrime << endl;
    cout << "The number of palindrome numbers : " << totalPalindrome << endl;
    cout << "The number that has the maximum number of divisors : " << arr[indxOfMaxDivisors] << endl;

}

int vanyaAndFence(int arr[], int N, int h)
{
    int result = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > h)
            result += 2;
        else
            result++;
    }
    return result;
}

int twoElevators(int a, int b, int c)
{
    int result = 0;
 
    int costA = a - 1;
    costA = abs(costA);
    if (costA == 0)
        result = 1;
    else
    {
        int costB = b - c;
        costB = abs(costB);
        int temp = c - 1;
        temp = abs(temp);
        costB += temp;
        if (costA == costB)
            result = 3;
        else if (costA < costB)
            result = 1;
        else
            result = 2;
    }


    return result;
}

void decodeString(string s, int l)
{
    for (int i = 0; i < l; i++)
    {
        if (i == l - 1 && s[i] != '0')
        {
            char temp = s[i] - '1' + 'a';
            cout << temp;
            break;
        }
        if ((s[i + 2] != '0') || (s[i + 2] == '0' && s[i + 3] == '0' && (i != l - 1)))
        {
            char temp = s[i] - '1' + 'a';
            cout << temp;
        }
        else
        {
            if (s[i] == '1')
            {
                if (s[i + 1] == '0')
                {
                    cout << 'j';
                    i += 2;
                }
                else
                {
                    char temp = 'j' + s[i + 1] - '0';
                    cout << temp;
                    i += 2;
                }
            }
            else
            {
                if (s[i + 1] == '0')
                {
                    cout << 't';
                    i += 2;
                }
                else
                {
                    char temp = 't' + s[i + 1] - '0';
                    cout << temp;
                    i += 2;
                }
            }
        }
    }
}

string luckyDivision(int n)
{
    string result = "NO";
    if (n % 4 == 0)
        result = "YES";
    else if (n % 7 == 0)
        result = "YES";
    else if (n % 47 == 0)
        result = "YES";
    else if(n % 74 == 0)
        result = "YES";
    else if (n % 77 == 0)
        result = "YES";
    else if (n % 44 == 0)
        result = "YES";
    else if(n % 744 == 0)
        result = "YES";
    else if (n % 747 == 0)
        result = "YES";
    else if (n % 777 == 0)
        result = "YES";
    else if (n % 444 == 0)
        result = "YES";
    else if (n % 447 == 0)
        result = "YES";
    else if (n % 474 == 0)
        result = "YES";
    else if (n % 774 == 0)
        result = "YES";
    else if (n % 474 == 0)
        result = "YES";
    else if (n % 477 == 0)
        result = "YES";
    return result;
}

void replaceWord(string s)
{
    int len;
    len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] != 'E')
            cout << s[i];
        else if (s[i] == 'E' && s[i + 1] == 'G' && s[i + 2] == 'Y' && s[i + 3] == 'P' && s[i + 4] == 'T')
        {
            cout << ' ';
            i += 4;
        }
        else
            cout << s[i];
    }
}

void letsUseGetline()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '\\')
            break;
        cout << s[i];
    }
    
}

void rangeSumQuery(long arr[], int N, int t)
{
    int L, R;
    long long result;
    long long prefixSum[100000];
    prefixSum[0] = arr[0];
    for (int i = 0; i < N; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    while (t--)
    {
        cin >> L >> R;
        result = prefixSum[R - 1] - prefixSum[L - 1] + arr[L - 1];
        cout << result << endl;
    }
}

//main function
int main()
{
    fast();
    

    return 0;
}
