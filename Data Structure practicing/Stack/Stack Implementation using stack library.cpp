#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<string> s;

	s.push("A");                //Insert A
	s.push("B");                //Insert B
	s.push("C");                //Insert C
	s.push("D");                //Insert D

	//print the size (4)
	cout << "The stack's size is: " << s.size() << endl;

	//print the top element
	cout << "The top element is " << s.top() << endl;

	s.pop();                    //pop D
	s.pop();                    //pop C

	//now the size is 2
	cout << "The stack's size is: " << s.size() << endl;

	//check if the stack is empty
	if (s.empty())
	{
		cout << "The stack is empty\n";
	}
	else
	{
		cout << "The stack is not empty\n";
	}

	return 0;
}
