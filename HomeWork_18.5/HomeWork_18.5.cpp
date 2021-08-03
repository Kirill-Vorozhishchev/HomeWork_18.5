#include <iostream>
#include <stack>
#include <string>
#include <iomanip>
#include <cassert>

using namespace std;
template <typename STACK>

class Stack 
{
private:
	STACK* Stackptr;
	int size;
	int top;


public:
	Stack(int = 10);
	~Stack();
	bool push(const STACK);
	bool pop();
	void printStack();
};

template <typename STACK>
Stack <STACK> ::Stack(int s)
{
	size = s > 0 ? s : 10;
	Stackptr = new T[size];
	Top = -1;
}

template <typename STACK>
Stack<STACK> :: ~Stack()
{
	delete[] St;
}

template <typename STACK>
bool Stack <STACK> ::push(const STACK value)
{
	if (Top == size - 1)

		Top++;
	St[Top] = value;
	return true;
}

template <typename STACK>
bool Stack<STACK> ::pop()
{
	if (Top == -1)
		return false;
	St[Top] = 0;
	Top--;
	return true;
}

template <typename STACK>
void Stack<STACK> ::printStack()
{
	for (int i = size - 1; i >= 0; i--)
		cout << " " << setw(4) << St[i] << endl;
}


int main()
{
	setlocale(LC_ALL, "Rus");
		Stack <int> StackS(3);
		cout << "Запись элемента в Stack" << '\n';
		int ct = 0;
		while (ct++ != 3)
		{
			int temp;
			cin >> temp;
			StackS.push(temp);
		}
		StackS.printStack();
		cout << "Удаление элемента из Stack";
		StackS.pop();
		StackS.printStack();

		return 0;
}
