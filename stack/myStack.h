struct Stack
{
	int number;
	Stack* next;
};

void menu();
void push(Stack*& stk, int n);
int pop(Stack*& stk);
void show(Stack*& stk);
void task(Stack*& stc);
void inFile(Stack*& stc);
void outFile(Stack*& stc);
//void find(Stack*& stk);
//void clear(Stack *&stc);


