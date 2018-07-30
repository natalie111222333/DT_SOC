#include<iostream>
#include<stdlib.h> 
#include<stack> 
using namespace std;
template<class T> class Stack {
 public: stack<T> Num; 
		 stack<T> Min; 
	 //��ջ 
	void Push(const T& x) {
	if (Min.empty() || x <= Min.top()) {
		cout << "Min.push(" << x << ")" << endl; 
		Min.push(x);
		} 
		cout << "Num.push(" << x << ")" << endl;
		Num.push(x); 
	} 
	//��ջ 
	void Pop() { 
		if (Min.top() == Num.top()) {
		cout << "Min.pop(" << Min.top() << ")" << endl; Min.pop(); 
		} 
		cout << "Num.pop(" << Num.top() << ")" << endl; Num.pop(); 
	}
	//������Сֵ 
	T& MinNum() { return Min.top(); } 
	//��ӡջ 
	void Print() {
		cout << "Num: ";
		while (!Num.empty()) {
			cout << Num.top() << " "; Num.pop();
				} 
		cout << endl; cout << "Min: ";
		while (!Min.empty()) { 
			cout << Min.top() << " "; Min.pop();
			}	
		cout << endl; 
		}
	size_t Size() {
		return Num.size(); 
	} 
};
	//����
	int main() {
		Stack<int> S; 
		S.Push(9); S.Push(2); S.Push(2); S.Push(6); S.Push(3); S.Push(3); S.Push(1);
		cout << S.MinNum() << endl; S.Print(); 
		S.Pop(); S.Pop(); S.Pop(); S.Pop(); S.Pop(); S.Pop(); S.Pop();
		system("pause");
	}
