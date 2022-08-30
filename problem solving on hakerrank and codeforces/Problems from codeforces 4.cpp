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

void PUM(int number)
{
    int counter = 1;
    for (int i = 0; counter <= number; counter++)
    {
        i++;
        cout << i << " ";
        i++;
        cout << i << " ";
        i++;
        cout << i << " " << "PUM";
        cout << endl;
        i++;
    }


}

void printRecursion(int v)
{
    if (v == 1)
        cout << "I love Recursion" << endl;
    else
    {
        cout << "I love Recursion" << endl;
        printRecursion(v - 1);

    }
}

void luckyNumbers(int a, int b)
{
    int temp = 0, digit = 0, counter = 0;
    bool checker = 0;
    for (int i = a; i <= b; i++)
    {
        checker = 0;
        temp = i;
        while (temp != 0)
        {
            
            digit = temp % 10;
            temp /= 10;
            if (digit != 4 && digit != 7)
                checker = 1;
            
        }       
        if (checker == 0)
        {
            cout << i << " ";
            counter++;
        }
    }
    if (counter == 0)
        cout << -1;
}

long long someSums(int N, int A, int B)
{
    int temp = 0;
    bool checker = 0;
    short digit = 0;
    int someOfDigit = 0;
    long long sumOfSomes = 0;
    for (int i = 1; i <= N; i++)
    {
        temp = i;
        someOfDigit = 0;
        //loop to calculate the sum of the digit of the number.
        while (temp != 0)
        {
            digit = temp % 10;
            temp /= 10;
            someOfDigit += digit;
        }
        if (someOfDigit >= A && someOfDigit <= B)
        {
            sumOfSomes += i;
        }
    }
    return sumOfSomes;
}

void shape3(int N)
{
    int k = 1, space = N - 1;
    for (int i = 1; i <= N; i++)
    {
        for (int t = space; t > 0; t--)
            cout << " ";

        space--;

        for (int j = 1; j <= k; j++)
            cout << '*';

        k += 2;
        cout << endl;
    }

    k -= 2;
    space = 1;
    for (int i = 1; i <= N; i++)
    {
        for (int t = 1; t < space; t++)
            cout << " ";

        space++;

        for (int j = k; j > 0; j--)
            cout << '*';

        k -= 2;
        cout << endl;

    }
}

void printFrmN(int n)//using recursion.
{
    if (n == 1)
        cout << n;
    else
    {
        cout << n << " ";
        printFrmN(n - 1);
    }
}

int searching(int arr[], int N, int X)
{
    int result = -1;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == X)
        {
            result = i;
            break;
        }
    }

    return result;
}

void replacement(int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        //positive number.
        if (arr[i] > 0)
            arr[i] = 1;

        //negative number.
        else if (arr[i] < 0)
            arr[i] = 2;

        else
            arr[i] = 0;
    }

    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";

}

void possessionsInArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        if (arr[i] <= 10)
            cout << "A[" << i << "] = " << arr[i] << endl;
    }
}

int convertToDecimal(int number)
{
    int counter = 0, n = 0, digit = 0, decimalNumber = 0;
    
    while (number)
    {
        digit = number % 2;
        if (digit)
            counter++;
        number /= 2;
        digit = 0;
    }
    
    while (counter--)
    {
        decimalNumber += pow(2, n);
        n++;
    }
    
    return decimalNumber;
}

void lowestNumber(int arr[], int N)
{
    int lowest = 0, possession = 0;
    lowest = arr[0];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < lowest)
        {
            lowest = arr[i];
            possession = i;
        }
    }
    possession++;
    cout << lowest << " " << possession;

}

void reversing(int arr[], int N)
{
    for (int i = N - 1; i >= 0; i--)
        cout << arr[i] << " ";
}

string palindromeArray(int arr[], int N)
{
    string result = "YES";
    for (int i = 0, j = N - 1; i < N, j >= 0; i++, j--)
    {
        if (arr[i] != arr[j])
            result = "NO";
    }

    return result;
}

void sorting(int arr[], int N)
{

    ////using bubble sort.
    //for (int j = 0; j < N - 1; j++)
    //{
    //    for (int i = 0; i < N - j - 1; i++)
    //    {
    //        if (arr[i] > arr[i + 1])
    //            SWAP(arr[i], arr[i + 1]);
    //    }
    //}


    //using selection sort.                        //WA in testcase 2.
    int minIndex = 0;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            minIndex = i;

            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }   
            SWAP(arr[minIndex], arr[i]);
        }
    }




    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";

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

void selectionSort(int arr[], int N)
{
    int minIndex = 0;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            minIndex = i;

            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            SWAP(arr[minIndex], arr[i]);
        }
    }
}

long long fibonacci(int no)
{
    long long result = 0;
    if (no == 1)
       return result;

    else if (no == 2)
        return 1;

    else
    {
        int counter = 3;
        long long x = 0, y = 1, z = 0;
        while (counter <= no)
        {
            result = x + y;
            x = y;
            y = result;
            counter++;
        }
        return result;
    }
}

int sumDigits(char s[], int N)
{
    int result = 0, value = 0;
    char c = ' ';
    for (int i = 0; i < N; i++)
    {
        c = s[i];
        value = c - '0';
        result += value;
    }

    return result;
}

void division(int rate)
{
    cout << "Division ";
    if (rate >= 1900)
        cout << 1;
    else if (rate >= 1600)
        cout << 2;
    else if (rate >= 1400)
        cout << 3;
    else
        cout << 4;
}

string lucky(int arr[], int N)
{
    string result = "Unlucky";
    int mini = 0, freq = 0;
    bubbleSort(arr, N);
    mini = arr[0];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == mini)
        {
            freq++;
            continue;
        }
        else
            break;
    }

    if (freq % 2 != 0)
        result = "Lucky";

    return result;
}

string boyOrGirl(string s)
{
    string result = "CHAT WITH HER!";
    
    int len = 0;
    len = s.length();
    unordered_set<char> myString;
    for (int i = 0; i < len; i++)
    {
        myString.insert(s[i]);
    }

    if (myString.size() % 2 != 0) //if odd, then it's male
        result = "IGNORE HIM!";
    
    return result;
}

int tempVar = 0;
void printDigitsUsingRecursion(string s)
{
    int length = 0;
    length = s.length();

    if (length == 1)
        cout << s[length - 1];
    else
    {
        cout << s[tempVar] << " ";
        tempVar++;
        if (tempVar < length)
            printDigitsUsingRecursion(s);

        else
            tempVar = 0;
    }
}

int threeNumbers(int s, int k)
{
    int result = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (s - i - j >= 0 && s - i - j <= k)
                result++;
        }
    }
    return result;
}


//main function
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    printDigitsUsingRecursion("12121");
    
    return 0;
}
