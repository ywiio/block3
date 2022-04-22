#include <iostream>
#include <fstream>
#include "Queue.h"
using namespace std;

void menu()
{
	cout << "\n1-push, 2-pop, 3-show, 4-length, 5-max element, 6-del, 7-del all 0-end\n";
}

void create(Queue*& begin, Queue*& end, int n) //Формирование элементов очереди
{
	Queue* t = new Queue;
	t->next = NULL;
	t->number = n;
	if (begin == NULL)	
		begin = end = t;
	else
	{
		end->next = t;
		end = t;
	}
}

void del(Queue*& begin, Queue*& q)
{
	Queue* t;
	t = new Queue;
	t = begin;
	begin = begin->next;
	delete t;
}

void delall(Queue*& begin, Queue*& q)
{
	Queue* t;
	t = new Queue;
	while (begin != NULL)
	{
		t = begin;
		begin = begin->next;
		delete t;
	}
}

void show(Queue* begin, Queue* end)
{
	Queue* t = begin;
	if (t == NULL)
	{
		cout << "Queue is empty\n";
		return;
	}
	else
	while (t != end->next)
	{
		cout << t->number << endl;
		t = t->next;
	}
}

int sizeQueue(Queue* begin, Queue* end)
{
	Queue* t = begin;
	int count = 0;
	if (t != NULL) 
	while (t != end->next)
	{
		count++;
		t = t->next;
	}
	return count;
}

Queue* maxElem(Queue* begin) //Опрделение минимального элемента
{
	Queue* t = begin, * mx = nullptr;
	int max;
	if (t == NULL)
	{
		cout << "Queue is empty\n"; return 0;
	}
	else
	{
		max = t->number;
		while (t != NULL)
		{
			if (t->number >= max)
			{
				max = t->number;
				mx = t;
			}
			t = t->next;
		}
	}
	return mx;
}
