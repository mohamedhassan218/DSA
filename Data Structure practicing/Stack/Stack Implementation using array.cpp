#include <iostream>
#include <cstdlib>
using namespace std;

//define the defualt capacity of the stack:
#define SIZE 10

//class to represent a stack:
class Stack
{
	int* arr;
	int top;
	int capacity;

public:
	Stack(int size = SIZE);            //constructor
	~Stack();                          //destructor

	void push(int);
	int pop();
	int peek();

	int size();
	bool isEmpty();
	bool isFull();
};

//constructor:
Stack::Stack(int size)
{
	arr = new int[size];
	capacity = size;
	top = -1;
}

//destructor:
Stack::~Stack()
{
	delete[] arr;
}

//push function to add element:
void Stack::push(int element)
{
	//check if there're space in the stack or not:
	if (isFull())
	{
		cout << "Overflow \nProgram terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Inserting " << element << endl;
	arr[++top] = element;
}

//function to pop top element in the stack:
int Stack::pop()
{
	//check for stack under flow:
	if (isEmpty())
	{
		cout << "Underflow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Removing " << peek() << endl;

	//decrease stack size by one and (optionally) return the top element of the stack
	return arr[top--];
}

//function to return the top element in the stack (without removing it):
int Stack::peek()
{
	if (!isEmpty())
	{
		return arr[top];
	}
	else
	{
		exit(EXIT_FAILURE);
	}
}

//function to return the size of the stack:
int Stack::size()
{
	return top + 1;
}

//function checks if the stack is empty:
bool Stack::isEmpty()
{
	return top == -1;              //or return size() == 0;
}

//function checks if the stack is full:
bool Stack::isFull()
{
	return top == capacity - 1;    //or return size() == capacity;
}

//main function:
int main()
{
	Stack pt(3);

	pt.push(1);
	pt.push(2);

	pt.pop();
	pt.pop();

	pt.push(3);

	cout << "The top element is: " << pt.peek() << endl;
	cout << "The stack size is: " << pt.size() << endl;

	pt.pop();

	if (pt.isEmpty())
	{
		cout << "The stack is empty" << endl;
	}
	else
	{
		cout << "The stack isn't empty" << endl;
	}



	return 0;
}






