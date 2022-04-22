#include <iostream>
#include <fstream>
#include "Queue.h" //соббственные файлы надо называть с маленькой буквы
using namespace std;


int main()
{
    string ans;
    Queue* begin = NULL, * end = begin, * q;
    q = new Queue;
    int n, size=0;
    cout << "max queue size: "; cin >> size;
    do
    {
        menu();
        cin >> ans;
        if (ans == "1")
        {
            cout << "write a number "; cin >> n;
            create(begin, end, n);
        }
        else if (ans == "2") del(begin, q);
        else if (ans == "3") show(begin, end);
        else if (ans == "4") cout << sizeQueue(begin, end);
        else if (ans == "5")
        {
            q = maxElem(begin);
            cout << "max: " << q->number << endl;

        }
        else if (ans == "6") delall(begin, q);
        else if (ans == "0") break;
        else cout << "incorrect answer\n";
    } while (true);
}