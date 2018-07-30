#include<iostream>
using namespace std;
#define MAX 26
char stack[MAX];
int index=0;
int push(char x)
{
	if(index>=MAX)
		return(1);/*栈满*/
	stack[index++]=x;
	return (0);/*进栈成功*/
}
int pop(char*p_y)
{
	if(index==0)
		return(0);/*栈为?空*/
	*p_y=stack[--index];
	return (1);/*出栈成功*/
}
int main()
{
	char x;
	char p_y;
	cout<<"please input x:"<<endl;
	while(cin>>x){
		if(x=='#')
			break;
		if(push(x)){
			cout<<"ERROR!"<<endl;
		return 0;
		}
	}
	while(pop(&p_y)){
		cout<<p_y<<endl;
	}
	return 0;
}
