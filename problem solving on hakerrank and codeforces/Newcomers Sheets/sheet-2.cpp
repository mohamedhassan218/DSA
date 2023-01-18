#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;


void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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
 

///////////////////////////
//PROBLEMS      :)
void oneToN(int no)
{
    for (int i = 1; i <= no; i++)
    {
        cout << i << endl;
    }
}

void evenNumbers(int number)
{
    if (number >= 2)
    {
        for (int i = 2; i <= number; i += 2)
        {
            cout << i << endl;
        }
    }
    else
        cout << "-1";
}

void evenOddPosNeg(int numberOfVariables)
{
    int positive = 0, negative = 0, even = 0, odd = 0, var = 0;
    for (int i = 1; i <= numberOfVariables; i++)
    {
        cin >> var;
        if (var > 0)
            positive++;
        else if (var < 0)
            negative++;
 
        var %= 2;
        if (var == 0)
            even++;
        else
            odd++;
    }
 
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
}

void fixedPassword()
{
    bool whileKey = true;
   string password = " ";
   while (whileKey)
   {
       cin >> password;
       if (password == "1999")
       {
           cout << "Correct";
           whileKey = false;
       }
       else
           cout << "Wrong" << endl;
   }
}

void MAXI()
{
    int no =0;
    cin >> no;
    
    long maxi = 0, vari = 0;
    for (int i = 1; i <= no; i++)
    {
        cin >> vari;
        if (vari > maxi)
        {
            maxi = vari;
        }
    }
    cout << maxi;
}

void multiplicationTable(int number)
{
    for (int i = 1; i <= 12; i++)
    {
        cout << number << " * " << i << " = " << number * i << endl;
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

void divisors(int N)
{
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
            cout << i << endl;
    }
 
}

int gcd(int x, int y) {
   int a, b;
   a = MAX(x, y);
   b = MIN(x, y);
   
   if (b == 0)
   return a;
   return gcd(b, a % b);
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

void numbersHistogram(char c, int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= arr[i]; j++)
            cout << c;
 
        cout << endl;
    }
 
 
}
 
void pyramid(int io)
{
    for (int i = 1; i <= io; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
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
            cout << "*";
            k++;
        }
        cout << endl;
    }
 
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
        checker = 0;
        someOfDigit = 0;
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
 
void easyFibo(int no)
{
    /*if (no == 0)
        cout << 0 << " ";*/
 
    if (no == 1)
        cout << 0;
    
    else if(no == 2)
        cout << 0 << " "<<  1;
 
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
 

//main
int main()
{

    fast();
    
    return 0;
}