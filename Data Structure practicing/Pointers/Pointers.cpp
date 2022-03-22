#include <iostream>
using namespace std;
int main()
{
///////////////////////////////////////////////////////////////////////////////////	

    int variable1 = 60;
	int variable2 = 50;            //define and initialize three variables.
	int variable3 = 30;
	cout << &variable1 << endl;
	cout << &variable2 << endl;   //print the addresses of the three variables.
	cout << &variable3 << endl;

///////////////////////////////////////////////////////////////////////////////////

	int var1 = 40;                
	cout << &var1 << endl;     //create a variable and print its address using the variable itself.
	int* ptr;
	ptr = &var1;
	cout << ptr << endl;                //print the address of the variable using the pointer.
	cout << *ptr << endl << endl;       //prints the value in the variable pointed to by pointer.


	/*
	char *ptr;                 //pointer to char
	float *ptr;                //pointer to float
	Distance *ptr;             //pointer to a user-defined data type

	//to define three pointers:
	char *ptr1, *ptr2, *ptr3;
    */

////////////////////////////////////////////////////////////////////////////////////

	//void pointer: Void pointer can point to a variable of any data type.
	void* ptr1;
	void* ptr2;
	void* ptr3;
	void* ptr4;

	int v1 = 70;
	float v2 = 2.3;
	double v3 = 987;
	char v4 = 'A';

	ptr1 = &v1;
	ptr2 = &v2;
	ptr3 = &v3;
	ptr4 = &v4;
	
////////////////////////////////////////////////////////////////////////////////////

	//pointers and arrays:

	int intArray[5] = { 10, 20, 30, 40, 50 };
	for (int i = 0; i < 5; i++)                      //For loop to print array's items.   (normal)
	{
		cout << intArray[i] << endl;         
	}
	cout << "#######################################################" << endl;
    
	for (int i = 0; i < 5; i++)                     //For loop to print array's items.   (using pointer)
	{
		cout << *(intArray + i) << endl;             
	}

	return 0;
}