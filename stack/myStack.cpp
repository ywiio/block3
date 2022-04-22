#include <iostream>
#include <fstream>
#include "myStack.h"
using namespace std;

void menu()
{
	cout << "\n1-push, 2-pop, 3-show, 4-del first poloj, 5-in file, 6-out file, 0-end\n";
}

void push(Stack*& stk, int n)
{
	Stack* temp = new Stack;
	temp->number = n;
	temp->next = stk;
	stk = temp;
}

int pop(Stack*& stk)
{
	if (stk == NULL)
	{
		cout << "empty";
		return -1;
	}
	else
	{
		if (stk)
		{
			int x= stk->number;
			Stack* temp = stk;
			stk = stk->next;
			delete(temp);
			return x;
		}
		return 0;
	}
}

void show(Stack*& stk)
{
	Stack* temp = stk;
	if (temp == NULL) cout << "stack is empty\n";
	else
	{
		while (temp != NULL)// cout << pop(temp) << " ";
		{
			cout << temp->number<<" ";
			temp = temp->next;
		}
		cout << endl;
	}
}

void task(Stack*& stk)
{
	Stack* temp = stk;
	if (temp == NULL) cout << "stack is empty\n";
	else
	{
		if (temp->number > 0)
		{
			pop(temp);
			stk = temp;
		}
	}
}

void inFile(Stack*& stk)
{
	Stack* temp = stk;
	ofstream fout("Stack.txt");
	if (fout.fail())
	{
		cout << "impossible to open\n";
		exit(1);
	}
	while (temp != NULL)
	{
		fout << temp->number;
		if (temp->next != NULL)
			fout << " ";
		temp = temp->next;
	}
	cout << "write in file\n";
	fout.close();
}

void outFile(Stack*& stk)
{
	ifstream fin("Stack.txt");
	
	if (fin.fail())
	{
		cout << "impossible to open\n";
		exit(1);
	}
	
	while (!fin.eof())
	{
		Stack* temp = new Stack;
		char x[10];
		fin >> x;
		temp->number = atoi(x);
		temp->next = NULL;
		if (stk == NULL)
			stk = temp;
		else
		{
			Stack* t = stk;
			while (t->next != NULL)
				t = t->next;
			t->next = temp;
		}
	}
	cout << "\nwrite out file\n";
	fin.close();
}



// find a number
//void find(Stack*& stk, int t)
//{
//	Stack* temp = stk;
//	int num;
//	cout << "write a num ";
//	cin >> num;
//	for (int i = 0; i < t; i++)
//	{
//		if (num == i + 1)
//		{
//			cout << "this is what you find " << temp->number;
//		}
//		temp = temp->next;
//	}
//}