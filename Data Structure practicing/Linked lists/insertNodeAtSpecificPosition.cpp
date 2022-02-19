#include <iostream>
using namespace std;


//linked list node:
struct node
{
	int data;
	node* next;
};

//size of linked list:
int size = 0;

//function to create and return a node:
node* getNode(int data)
{
	//allocating a space
	node* newNode = new node();

	//inserting the required data
	newNode->data = data;
	newNode->next = NULL;

	return newNode;
}

//function to insert a node at required position:
void insertPos(node** current, int pos, int data)
{
	//validate the position given
	if (pos < 1 || pos >(size + 1))
	{
		cout << "Invalid position!" << endl;
	}
	else
	{


	}
}
//not finished yet