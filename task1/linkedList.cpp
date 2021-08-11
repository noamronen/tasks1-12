#include"linkedList.hpp"
#include<iostream>
using namespace std;

linked_list::linked_list()
{
	head = NULL;
	size = 0;
}
linked_list::linked_list(int num)
{
	add(num);
}
void linked_list::add(int data) {
	node* temp = new node();
	temp->data = data;
	if (head == NULL)//list is empty 
	{
		head = temp;
	}
	else {
		node* ptr = head;
		while (ptr->next != NULL) 
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	size++;
}
int linked_list::erase()
{
	if (head == NULL) 
	{
		return NULL;
	}
	else if (head->next == NULL) 
	{
		int temp = head->data;
		delete(head);
		head = NULL;
		size--;
		return temp;
	}
	else 
	{
		node* temp = head;
		int returnV;
		while (temp->next->next != NULL) 
		{
			temp = temp->next;
		}
		returnV = temp->next->data;
		delete(temp->next);
		temp->next = NULL;
		size--;
		return returnV;
	}

}
void linked_list::print()
{
	if (head == NULL) 
	{
		cout << "List is empty" << endl;
	}
	else 
	{
		node* temp = head;
		cout << "Linekd List: ";
		while (temp != NULL) 
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << "NULL" << endl;
	}
}

int linked_list::peek()
{
	if (head == NULL)
	{
		return NULL;
	}
	else if (head->next == NULL)
	{
		return head->data;
	}
	else
	{
		node* temp = head;
		int returnV;
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}
		return  temp->next->data;
	}
}
