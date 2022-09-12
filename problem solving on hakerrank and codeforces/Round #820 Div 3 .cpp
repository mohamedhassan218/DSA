#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
#include <iomanip>
#include <cmath>
using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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



//main function
int main()
{
    fast();
    
    
    return 0;
}
