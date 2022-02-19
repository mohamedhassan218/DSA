#include <iostream>
using namespace std;

//to create a node:
struct node
{
	int data;
	node *next;
};

//class to take objects of linked lists:
class linkedList
{
private:
	node *head, *tail;

public:
	//constructor to initiate the linked list:
	linkedList()
	{
		head = NULL;
		tail = NULL;
	}

	//function to add new node:
	void addNode(int n)
	{
		node* temp = new node;
		temp->data = n;
		temp->next = NULL;

		if (head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			tail = tail->next;
		}/*The new node(tmp) will go after the ‘tail’and
		   then we are changing the tail because the new node is the new ‘tail’.*/
	}

	//function to display the data in each node in the linked list without recursion:
	void display()
	{
		node* temp;
		temp = head;
		while (temp != NULL)
		{
			cout << temp->data << "---";
			temp = temp->next;
		}
		cout << endl;
	}
};


int main()
{
	//create linked list & adding data (nodes to store the data added)
	linkedList myLinkedList;
	myLinkedList.addNode(15);
	myLinkedList.addNode(25);
	myLinkedList.addNode(35);

	//display the data in each node
	myLinkedList.display();

	return 0;
}