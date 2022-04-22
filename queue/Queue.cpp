#include <iostream>
#include <fstream>
#include "Queue.h"
using namespace std;

void menu()
{
	cout << "\n1-push, 2-pop, 3-show, 4-length, 5-max element, 6-del all 0-end\n";
}

void create(Queue** begin, Queue** end, int n) //������������ ��������� �������
{
	Queue* t = new Queue;
	t->next = NULL;
	if (*begin == NULL)
		*begin = *end = t;
	else
	{
		t->number = n;
		(*end)->next = t;
		*end = t;
	}
}

void del(Queue** begin, Queue** q)
{
	Queue* t;
	t = new Queue;
	t = *begin;
	*begin = (*begin)->next;
	delete t;
}

void delall(Queue** begin, Queue** q)
{
	Queue* t;
	t = new Queue;
	while (*begin != NULL)
	{
		t = *begin;
		*begin = (*begin)->next;
		delete t;
	}
}

void show(Queue* begin)
{
	Queue* t = begin;
	if (t == NULL)
	{
		cout << "Queue is empty\n";
		return;
	}
	else
	while (t != NULL)
	{
		cout << t->number << endl;
		t = t->next;
	}
}

Queue* maxElem(Queue* begin) //���������� ������������ ��������
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

void sizeQueue()
{

}