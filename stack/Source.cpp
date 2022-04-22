#include <iostream>
#include <fstream>
#include "myStack.h"

using namespace std;


int main()
{
	string ans;
    Stack* stk = NULL;
    int n;
	do
	{
		menu();
		cin >> ans;
        if (ans == "1")
        {
            cout << "write a number ";
            cin >> n;
            push(stk, n);
        }
        else if (ans == "2") pop(stk);
        else if (ans == "3") show(stk);
        else if (ans == "4") task(stk);
        else if (ans == "5") inFile(stk);
        else if (ans == "6") outFile(stk);
        else if (ans == "0") break;
        else cout << "incorrect answer\n";
    } while (true);
}
