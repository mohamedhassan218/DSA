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

void SWAP(int& a, int& b)
{
    int temp;
    temp = a; 
    a = b;
    b = temp;
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

long ABS(long a)
{
    long result = a;
    if (result < 0)
        result *= -1;
 
    return result;
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



///////////////////
//PROBLEMS      :)

long long summation(long arr[], int n)
{
    long long result = 0;
    for (int i = 0; i < n; i++)
    {
        result += arr[i];
    }
    result = abs(result);
    return result;
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
    int minIndex = 0;
    //using bubble sort.
    for (int j = 0; j < N - 1; j++)
    {
        for (int i = 0; i < N - j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
                SWAP(arr[i], arr[i + 1]);
        }
    }
 
 
    //using selection sort.
    /*for (int i = 0; i < N - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < N; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
 
            SWAP(arr[minIndex], arr[i]);
        }
 
    }*/
 
 
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
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
 
void replaceMinMax(int arr[], int N)
{
    int myArr[N];
    int mini = 0, maxi = 0, miniIndx = 0, maxiIndx = 0;
    for (int i = 0; i < N; i++)
        myArr[i] = arr[i];
    bubbleSort(myArr, N);
    mini = myArr[0];
    maxi = myArr[N - 1];
 
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == mini)
            miniIndx = i;
 
        if (arr[i] == maxi)
            maxiIndx = i;
    }
 
    SWAP(arr[miniIndx], arr[maxiIndx]);
 
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
}
 
string checkCode(int beforeDigit, int afterDigit, string CODE)
{
    string result = "Yes";
    int len = 0, bef = 0, af = 0;
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

long matrix(int arr[][100], int N)
{
    long mainDig = 0, secDig = 0, result = 0;
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

void frequencyArray(int arr[], int N, int M)
{
    //M = 5, N = 10, {1,2,3,4,5,3,2,1,5,3}.
    int myArr[M + 1] = {0}; //{0,0,0,0,0,0,}
    int var = 0;
    for (int i = 0; i < N; i++)
    {
        var = arr[i]; // 1                  //2
        myArr[var]++; // {0,1,0,0,0,0}    //{0,1,1,0,0,0}
    }
 
    for (int i = 1; i <= M; i++)
        cout << myArr[i] << endl;
}

void mirrorArray(int arr[][100], int M, int N)
{
    //M the rows, N the columns:
    for (int i = 0; i < M; i++)//looping on each row:
    {
        for (int j = 0, k = N - 1; j < N / 2; j++, k--)
        {
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
    if(checker)
    {
    if(X == 1 || X == N || Y == 1 || Y == M)
        result = "no";
    else
    {
        if(arr[i - 1][j - 1] != 'x' ||
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

int binarySearch(int arr[], int N, int item, int l, int r)
{
	//int low = l, high = r;
	if (r >= l)
	{
		int mid = (l + r) / 2;
 
		if (arr[mid] == item)
			return mid;
		else if (arr[mid] > item)
			return binarySearch(arr, N, item, l, mid - 1);
		else
			return binarySearch(arr, N, item, mid + 1, r);
 
	}
	return -1;
}

//main
int main()
{
    fast();

    return 0;
}