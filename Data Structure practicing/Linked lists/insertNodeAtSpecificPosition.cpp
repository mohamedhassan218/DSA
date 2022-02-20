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
		//continue looping until position = 0:
		while (pos--)
		{
			if (pos == 0)
			{
				//adding node at required position
				node* temp = getNode(data);

				//making new node pointing to old node at the same position:
				temp->next = *current;

				//changing pointer of previous node to point to new node:
				*current = temp
			}
			else
			{
				//assign double pointer variable to point to the pointer pointing to the address of next node:
				current = % (*current)->next;
			}
		}
		size++;


	}
}

//function to prints contents:
void printList(struct node* head)
{
	while (head != NULL)
	{
		cout << " " << head->data;
		head = head->next;
	}
	cout << endl;
}


