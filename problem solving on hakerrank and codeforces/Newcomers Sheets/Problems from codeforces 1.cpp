

string lastDigit(int number)
{
    string result = "ODD";

    number %= 1000;
    number %= 100;
    number %= 10;
    number %= 2;
    if (number == 0)
        result = "EVEN";

    return result;
}

string watermelon(int weight)
{
    string result = "NO";

    if (weight > 3)
    {
        weight %= 2;
        if (weight == 0)
            result = "YES";
    }
    return result;
}



string hardCompare(long long a, long long b, long long c, long long d)
{
    string result = "NO";
    double y, z;
    y = log(a) * b;
    z = log(c) * d;
    if (y > z)
        result = "YES";

    return result;
}


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
    cin >> numberOfVariables;
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
}    //code this directly in the main function

long timonAndPompa(long a, long b)
{
    long result = 0;

    if (a > b)
        result = a - b;

    return result;
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

void multiplicationTable(int number)
{
    for (int i = 1; i <= 12; i++)
    {
        cout << number << " * " << i << " = " << number * i << endl;
    }

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
            cout << "Wrong";
    }

}//code this in the main function

long MAX(int no)
{
    long maxi = 0, vari = 0;
    for (int i = 1; i <= no; i++)
    {
        cin >> vari;
        if (vari > maxi)
        {
            maxi = vari;
        }
    }
    return maxi;
}//this code in the main function

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

void lucky(string myNumbers[], int testCases)
{
    int left3 = 0, right3 = 0;
    for (int i = 0; i < testCases; i++)
    {
        left3 = myNumbers[i][0] + myNumbers[i][1] + myNumbers[i][2];
        right3 = myNumbers[i][3] + myNumbers[i][4] + myNumbers[i][5];
        if (left3 == right3)
            myNumbers[i] = "YES";
        else
            myNumbers[i] = "NO";
    }

    for (int i = 0; i < testCases; i++)
    {
        cout << myNumbers[i] << endl;
    }

}

void lastTwoDigits(int a, int b, int c, int d)
{
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    
    a = a * b * c * d;
    a %= 100;

    if (a < 10)
        cout << 0 << a;
    else
        cout << a;

}


int main()
{
    

    return 0;
}
