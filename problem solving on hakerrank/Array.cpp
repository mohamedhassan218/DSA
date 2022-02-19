#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
using namespace std;


int main() 
{
    int numberOfElements;
    cin >> numberOfElements;
    int myArray[numberOfElements];
    
    for (int i = 0; i < numberOfElements; i++)
    {
        cin >> myArray[i];
    }
    
    for (int i = (numberOfElements - 1); i >= 0; i--)
    {
        cout << myArray[i] << " ";
    }
    return 0;
}
