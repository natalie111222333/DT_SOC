#include<iostream>
using namespace std;
#define MAX 26
char stack[MAX];
int index=0;
int push(char x)
{
	if(index>=MAX)
		return(1);/*ջ��*/
	stack[index++]=x;
	return (0);/*��ջ�ɹ�*/
}
int pop(char*p_y)
{
	if(index==0)
		return(0);/*ջΪ?��*/
	*p_y=stack[--index];
	return (1);/*��ջ�ɹ�*/
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
