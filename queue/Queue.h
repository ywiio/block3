struct  Queue
{
	int number;
	Queue* next;
};

void menu();
void create(Queue*& begin, Queue*& end, int n);
void del(Queue*& begin, Queue*& q);
void delall(Queue*& begin, Queue*& q);
void show(Queue* begin, Queue* end);
int sizeQueue(Queue* begin, Queue* end); //?????? ???????
Queue* maxElem(Queue* begin);
