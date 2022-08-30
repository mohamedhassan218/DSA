#include <iostream>
#include <vector>
#include <string>
using namespace std;

using namespace std;
void staircase(int n);
void swap(int& no1, int& no2);
void myBubbleSort(int arr[]);
int birthdayCakeCandles(std::vector<int> arr);
void timeConversion(string s);
void PyramidOfStars(int n);
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges);

int main()
{
  
	return 0;
}

//void staircase(int n)    
// {
//    /*
//    for (int i = 0 ; i < n ; i++)
//    {
//        for (int j = i ; j < (n-1) ; j++)
//            cout << " ";
//        for (int k = 0 ; k <= i ; k++)
//            cout << "#";
//        cout << "\n";
//    }
//    */
//
//    int w = n;
//    cout.width(w);
//    for (int i = 0; i < n; i++) {
//        w--;
//        for (int j = 0; j <= i; j++)
//            cout << "#";
//        cout.width(w);
//        cout << endl;
//    }
//}

//void staircase(int n) 
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i; j < (n - 1); j++)
//            cout << " ";
//        for (int k = 0; k <= i; k++)
//            cout << "#";
//        cout << "\n";
//    }
//}

void PyramidOfStars(int n)
{
    for (int i = 1, k = 0; i <= n; i++, k = 0)
    {
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }
        while (k != 2 * i - 1)
        {
            cout << "#";
            k++;
        }
        cout << endl;
    }

}

void staircase(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int m = n - i; m > 0; m--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "#";
        }

        cout << endl;
    }
}

void swap(int &no1, int &no2)
{
    int temp = 0;
    temp = no1;
    no1 = no2;
    no2 = temp;
}

void myBubbleSort(vector<int> arr)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);

            }
        }
    }
}

int birthdayCakeCandles(vector<int> arr)
{
    int max = 0, numberOfMax = 0;
    max = arr[0];
    
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == max)
        {
            numberOfMax++;
        }
    }

    return numberOfMax;
}

vector<int> gradingStudents(vector<int> grades)
{
    vector<int> results(grades.size());

    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] < 40)
        {
            if (grades[i] < 38)
            {
                results[i] = grades[i];
            }
            else if (grades[i] >= 38)
            {
                results[i] = 40;
            }
        }
        else if (grades[i] >= 40)
        {
            results[i] = grades[i];
            for (int j = 40; j <= 100; j += 5)
            {
                if (j - results[i] > 0 && j - results[i] < 3)
                {
                    results[i] = j;
                }
            }
        }
    }
    return results;
}

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int appleCounter = 0, orangeCounter = 0;
    
    for (int i = 0; i < apples.size(); i++)
    {
        apples[i] += a;
        if (apples[i] >= s && apples[i] <= t)
        {
            appleCounter++;
        }
    }

    for (int i = 0; i < oranges.size(); i++)
    {
        oranges[i] += b;
        if (oranges[i]  >= s && oranges[i]  <= t)
        {
            orangeCounter++;
        }
    }

    cout << appleCounter << endl << orangeCounter;
}

void timeConversion(string s)
{
    int h1 = (int)s[0] - '0';
    int h2 = (int)s[1] - '0';
    int hh = (h1 * 10) + (h2 % 10);

    if (s[8] == 'A')
    {
        if (hh == 12)
        {
            s[0] = '0';
            s[1] = '0';
            for (int i = 0; i < 8; i++)
            {
                cout << s[i];
            }
        }
        else
        {
            for (int i = 0; i < 8; i++)
            {
                cout << s[i];
            }
        }
    }
    else
    {
        if (hh == 12)
        {
            for (int i = 0; i < 8; i++)
            {
                cout << s[i];
            }
        }
        else
        {
            hh += 12;
            cout << hh;
            for (int i = 2; i < 8; i++)
            {
                cout << s[i];
            }
        }
    }
}