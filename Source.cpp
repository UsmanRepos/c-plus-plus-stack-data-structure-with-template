#include<iostream>
#define MAX 100
#include<string>
using namespace std;

template <typename T>
class myStack
{
	T l[MAX];
	int  top;

public:
	myStack() :top(-1) {}
	void myPush(T dd)
	{
		if (top < MAX - 1)
		{
			++top;
			l[top] = dd;

		}
		else
			cout << "Stack OverFlow. \n\n";
	}

	T pop()
	{
		if (top >= 0)
		{
			T temp = l[top];
			top--;
			return temp;
		}
		else
			cout << "Stack UndeFlow. \n\n";
	}
	T peak()
	{
		return l[top];
	}
	int Top()
	{
		return top;
	}
};
/*
int main()
{
	myStack<int> istack;
	myStack<char> fstack;

	istack.myPush(100);
	cout << istack.pop() << endl;

	fstack.myPush('d');
	cout << fstack.pop() << endl;

	system("pause");
}
*/




