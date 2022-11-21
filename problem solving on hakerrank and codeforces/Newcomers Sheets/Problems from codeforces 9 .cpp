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

int dominoPiling(int M, int N)
{
    int area = M * N, dominos = 0;
    for (int i = 1; i < area; i+=2)
    {
        dominos += 1;
    }
    return dominos;
}

string compare(string s1, string s2)
{
    string result = " ";
    int len1 = s1.size();
    int len2 = s2.size();
    int minLen = min(len1, len2);
    if (s1 == s2)
        result = s1;
    else
    {
        
        for (int i = 0; i < minLen; i++)
        {
            if (s1[i] < s2[i])
            {
                result = s1;
                break;
            }
            else if (s2[i] < s1[i])
            {
                result = s2;
                break;
            }
        }
    }
    if (result == " ")
    {
        if (minLen == len1)
            result = s1;
        else
            result = s2;
    }
    return result;
}   

void stringFunctions(string s, int q)
{
    string testCase;
    for (int i = 1; i <= q; i++)
    {
        int len = s.size();
        cin >> testCase;
        if (testCase == "pop_back")
            s.pop_back();
        else if (testCase == "front")
            cout << s.front() << endl;
        else if (testCase == "back")
            cout << s.back() << endl;
        else if (testCase == "sort")
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            sort(s.begin() + min(l, r), s.begin() + max(l, r) + 1);
        }
        else if (testCase == "reverse")
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            reverse(s.begin() + min(l, r), s.begin() + max(l, r) + 1);
        }
        else if (testCase == "print")
        {
            int pos;
            cin >> pos;
            pos--;
            cout << s[pos] << endl;
        }
        else if (testCase == "substr")
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            for (int i = min(l, r); i <= max(l, r); i++)
                cout << s[i];
            cout << endl;
        }
        else //if push_back
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }
}

string subSequence(string s)
{
    string myString = "hello";
    string result = "YES";
    int j = 0, len = 0, counter = 0;
    len = s.size();
    for (int i = 0; i < len; i++)
    {
        bool checker = 0;
        char temp1 = s[i], temp2;
        for (int m = j; m < 5; m++)
        {
            temp2 = myString[j];
            if (temp1 == temp2)
            {
                j++;
                counter++;
                break;
            }

        }
              
    }
    if (counter != 5)
        result = "NO";
    return result;
}

int maxSubSequence(int N, string s)
{
    int counter =  1;
    for (int i = 0; i < N ; i++)
    {       
        if (s[i] != s[i + 1] && i + 1 < N)
            counter++;
            
    }
    return counter;
}

void sortString(int l)
{
    //using the built in function
    /*sort(s.begin(), s.end());
    return s;*/
    int freq[26] = {0};
    for (int i = 0; i < l; i++)
    {
        char x;
        cin >> x;
        freq[x - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        while (freq[i] != 0)
        {
            char temp = i + 'a' ;
            cout << temp;
            freq[i]--;
        }
    }


}

int countWords()
{
    int counter = 0;
    string s, temp = "";
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ' || s[i] == '!' || s[i] == ',' || s[i] == '.' || s[i] == '?' )
        {
            if (temp.size() != 0)
            {
                counter++;
                temp = "";
            }
        }
        else if (s[i] != '!' && s[i] != '.' && s[i] != '?' && s[i] != ',')
            temp += s[i];

        if (i == s.size() - 1 && temp.size() != 0)
            counter++;
    }
    return counter;
}

long wrongSubtraction(long N, int k)
{
    while (k--)
    {
        if (N % 10 == 0)
            N /= 10;
        else
            N -= 1;
    }
    return N;
}

void reverseWords()
{
    string s, temp = " ";
    bool checker = 0;
    while (cin >> s)
    {
        reverse(s.begin(), s.end());
        if (checker)
            cout << " ";
        checker = 1;
        cout << s;
    }    
}

int stringScore(string s, int l)
{
    int score = 0;

        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'V')
                score += 5;
            else if (s[i] == 'W')
                score += 2;
            else if (s[i] == 'X')
                i++;
            else if (s[i] == 'Y' && i != l - 1)
            {
                s.push_back(s[i + 1]);
                i++;
                l++;
            }
            else if (s[i] == 'Z' && i != l - 1)
            {
                if (s[i + 1] == 'V')
                {   
                    score /= 5;
                    i++;
                }   
                else if (s[i + 1] == 'W')
                {
                    score /= 2;
                    i++;
                }
            }

        }
    return score;
}

void maxSplit(string s)
{
    //time limit exceeded
    //int lCntr = 0, cntr = 0;
    //for (int i = 0; i < s.size(); i++)
    //{
    //    if (s[i] == 'L')
    //    {
    //        lCntr++;
    //    }
    //    else
    //    {
    //        i += lCntr - 1;
    //        lCntr = 0;
    //        cntr++;
    //    }
    //}

    //cout << cntr << endl;
    //for (int i = 0; i < s.size(); i++)
    //{
    //    if (s[i] == 'L')
    //    {
    //        cout << s[i];
    //        lCntr++;
    //    }
    //    else
    //    {
    //        for (int j = lCntr; j < 2 * lCntr; j++)
    //        {
    //            cout << 'R';
    //        }
    //        i += lCntr - 1;
    //        lCntr = 0;
    //        cout << endl;
    //        
    //    }
    //}

    char arr[1000][1000];
    int row = 0, column = 0, lCntr = 0, rCntr = 0, cntr = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
        {
            arr[row][column] = s[i];
            lCntr++;
        }
        else
        {
            arr[row][column] = s[i];
            rCntr++;
        }
        column++;
        if (lCntr == rCntr && lCntr != 0 && rCntr != 0)
        {
            row++;
            column = 0;
            cntr++;
            lCntr = 0;
            rCntr = 0;
        }
    }
    cout << cntr << endl;
    for (int i = 0; i < 1000; i++)
    {
        if (arr[i][0] != 'L' && arr[i][0] != 'R')
            continue;
        cout << arr[i] << endl;
    }

}

void URL(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '?')
        {
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[j] == '=')
                    cout << ": ";
                else if (s[j] == '&')
                    cout << endl;
                else
                    cout << s[j];
            }
        }
    }
}

int newWord(string s)
{
    int result = 0;
    int e = 0, g = 0, p = 0, y = 0, t = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'e' || s[i] == 'E')
            e++;
        else if (s[i] == 'g' || s[i] == 'G')
            g++;
        else if (s[i] == 'p' || s[i] == 'P')
            p++;
        else if (s[i] == 't' || s[i] == 'T')
            t++;
        else if (s[i] == 'y' || s[i] == 'Y')
            y++;

    }

    result = min({ e, g, p, t, y });
    return result;
}

void encryptDecrypt(int n, string s)
{
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    if (n == 1)//print s after encrypt
    {
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < original.size(); j++)
            {
                if (s[i] == original[j])
                {
                    cout << key[j];
                    break;
                }
            }
        }
    }
    else//print s after decrypt
    {
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < key.size(); j++)
            {
                if (s[i] == key[j])
                {
                    cout << original[j];
                    break;
                }
            }
        }
    }
}





//main function
int main()
{
    fast();
    
    return 0;
}
