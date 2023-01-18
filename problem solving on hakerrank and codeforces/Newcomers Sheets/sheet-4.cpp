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
 


//////////////////
//PROBLEMS      :)
void createNewString(string s1, string s2)
{
    cout << s1.length() << " " << s2.length() << endl;
    cout << s1 << " " << s2;
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

void strings(string s1, string s2)
{
    char temp = ' ';
    int len1 = 0, len2 = 0;
    len1 = s1.length();
    len2 = s2.length();
    cout << len1 << " " << len2 << endl;
    cout << s1 + s2 << endl;
    temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
    cout << s1 << " " << s2 ;
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

void wayTooLongWords(string arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        int lengthOfString = arr[i].length();
        if (lengthOfString <= 10)
            cout << arr[i] << endl;
        else
        {
            cout << arr[i][0] << lengthOfString - 2 << arr[i][lengthOfString - 1] << endl;
        }
    }
 
}

string conversion(string s)
{
    int len = 0;
    len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == ',')
            s[i] = ' ';
        else if (s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
        else if (s[i] <= 90 && s[i] >= 65)
            s[i] += 32;
    }
 
    return s;
}

string goodOrBad(string s)
{
    string result = "Bad";
    int length = 0;
    length = s.length();
    for (int i = 0; i < length - 2; i += 2)
    {
        if (s[i] == '0' && s[i + 1] == '1' && s[i+2] == '0')
        {
            result = "Good";
            break;
        }
        else if(s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')
        {
            result = "Good";
            break;
        }
    }
 
    return result;
}

string palindrome(string s)
{
    string result = "YES";
 
    int length = 0;
    length = s.length();
    for (int i = 0, j = length - 1; i < length, j >= 0; i++, j--)
    {
        if (s[i] != s[j])
        {
            result = "NO";
            break;
        }    
    }
 
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
            sort(s.begin() + min(l, r), s.begin() + max(l, r)+1);
        }
        else if (testCase == "reverse")
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            reverse(s.begin() + min(l, r), s.begin() + max(l, r)+1);
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
 
string comparision(string s)
{
    string result = s;
    string s1 = "", s2 = "", temp = s;
    for (int i = 0; i < s.length() - 1; i++)
    {
        //split:
        s1 += s[i];
        temp.erase(0, 1);
        s2 = temp;
 
        //sort:
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        
        //concatenate:
        result = min(result, s1 + s2);
    }
    return result;
}
 
//problem y hasn't been solved yet.

void cleanCode()
{
    bool ifComment = false, ifCode = false;
    string line;
    while (getline(cin, line))
    {
        ifCode = false;
        
        //if empty line:
        if (line.length() == 0 || line == " ")
            continue;
 
        //check each character:
        for (int i = 0; i < line.length(); i++)
        {
            //if single comment:
            if (line[i] == '/' && line[i + 1] == '/' && !ifComment)
                break;
            //if multi line comment:
            else if (line[i] == '/' && line[i + 1] == '*')
            {
                ifComment = true;
                i++;
            }
            else if (line[i] == '*' && line[i + 1] == '/' && ifComment)
            {
                i++;
                ifComment = false;
            }
            else if (!ifComment)
            {
                cout << line[i];
                ifCode = true;
            }
        }
        if (ifCode && !ifComment)
            cout << "\n";
    }
}
 

//main
int main()
{
    fast();
    return 0;
}