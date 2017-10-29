#include <iostream>
#include <string>
using namespace std;
template <class T>
class Stack{
	public:
	Stack();
	void push(T i);
	T pop();
	int top;
	T st[100];
};
template <class T>
Stack<T>::Stack(){
	top = -1;
}
template <class T>
void Stack<T>::push(T i){
	st[++top] = i;
}
template <class T>
T Stack<T>::pop(){
	return st[top--];
}
int main (){
	Stack<int> istack;
	Stack<string> sstack;
	istack.push(69);
	sstack.push("Hello");
	sstack.push("World");
	cout << istack.pop() << endl;
	cout << sstack.pop() << endl;
	cout << sstack.pop() << endl;
	return 0;
}