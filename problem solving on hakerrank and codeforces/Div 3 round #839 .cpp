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


long APlusB(long a, long b)
{
    long res;
    res = a + b;
    return res;
}

string matrixRotation(int arr[])
{
    string result;
    int o1[4];
    int o2[4];
    int o3[4];
    o1[0] = arr[2];
    o1[1] = arr[0];
    o1[2] = arr[3];
    o1[3] = arr[1];

    o2[0] = o1[2];
    o2[1] = o1[0];
    o2[2] = o1[3];
    o2[3] = o1[1];

    o3[0] = o2[2];
    o3[1] = o2[0];
    o3[2] = o2[3];
    o3[3] = o2[1];

    if (arr[0] < arr[1] && arr[2] < arr[3] && arr[0] < arr[2] && arr[1] < arr[3])
        result = "YES";
    else if (o1[0] < o1[1] && o1[2] < o1[3] && o1[0] < o1[2] && o1[1] < o1[3])
        result = "YES";
    else if (o2[0] < o2[1] && o2[2] < o2[3] && o2[0] < o2[2] && o2[1] < o2[3])
        result = "YES";
    else if (o3[0] < o3[1] && o3[2] < o3[3] && o3[0] < o3[2] && o3[1] < o3[3])
        result = "YES";
    else
        result = "NO";

    return result;
}

//main function
int main()
{
    fast();
  
    return 0;
}