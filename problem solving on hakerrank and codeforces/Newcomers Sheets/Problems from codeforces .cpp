


string kangaroo(int x1, int v1, int x2, int v2)
{
    string result = "NO";
    if (x1 == x2 && v1 == v2)
    {
        result = "YES";
    }
    else if (x1 != x2 && v1 == v2)
    {
        result = "NO";
    }
    else
    {
        for (int i = 0; i < 10000; i++)
        {
            x1 += v1;
            x2 += v2;
            if (x1 == x2)
            {
                result = "YES";
            }
        }
    }
    return result;
}

/*string kangaroo(int x1, int v1, int x2, int v2)
{
    string result;
    if ((v1 <= v2) || ((x2 - x1) % (v2 - v1)))
    {
        result = "NO";
    }
    else
    {
        result = "YES";
    }

    return result;
}*/

void winterSale(float percent, float price)
{
    float totalPrice = 0;
    totalPrice = (percent * price) / (100 - percent);
    totalPrice += price;
    cout << totalPrice;
}

void memoAndMomo(long long a, long long b, long long k)
{
    if (a % k != 0 && b % k != 0)
    {
        cout << "No One";
    }
    else if (a % k == 0 && b % k == 0)
    {
        cout << "Both";
    }
    else if (a % k == 0)
    {
        cout << "Memo";
    }
    else
    {
        cout << "Momo";
    }
}

void nextChar(char c)
{
    if (c == 122)
    {
        cout << 'a';
    }
    else
    {
        cout << ++c;
    }
}

string aliBabaPuzzle(int a, int b, int c, long d)
{
    string result;
    /*if (a + b - c == d )
    {
        result = "YES";
    }else if (a + (b * c )== d )
    {
        result = "YES";
    }else if (a -( b * c )== d )
    {
        result = "YES";
    }else if (a - b + c == d )
    {
        result = "YES";
    }else if ((a * b) + c == d )
    {
        result = "YES";
    }else if ((a * b) - c == d )
    {
        result = "YES";
    }
    else
    {
        result = "NO";
    }*/

    if (a + b - c == d) { result = "YES"; }
    else if (a + b * c == d) { result = "YES"; }
    else if (a - b * c == d) { result = "YES"; }
    else if (a - b + c == d) { result = "YES"; }
    else if (a * b + c == d) { result = "YES"; }
    else if (a * b - c == d) { result = "YES"; }
    else { result = "NO"; }
    
    return result;
}
    
void luckyNumbers(int xy)
{
    int x = xy % 10;
    int y = xy / 10;

    if (x % y == 0)
    {
        cout << "YES";
    }
    else if (y % x == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

void dataTypeGuessing(double a, double k, double n)
{
    double result;
    result = (a * k) / n;
    long long myNumber = result;
    double myFraction = result - myNumber;
    if (myFraction != 0)
    {
        cout << "double";
    }
    else if (myNumber <= 2147483647)
    {
        cout << "int";
    }
    else
    {
        cout << "long long";
    }

}



