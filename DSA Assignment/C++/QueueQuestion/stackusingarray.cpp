#include <iostream>
using namespace std;
 
//complete the functions
class Stack{
	int *A;
	int end;
	int size;
 
	public:
	//constructor is called whenever an object of the class is declared
	Stack(int size){
		this->size = size;
		A = new int[size];
		end=-1;
 
	}
 
	//push the value at the back
	void push(int val){
		if (size - end > 1){
			end++;
			A[end] = val;
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
		} else{
			cout<<"Stack Overflow"<< endl;
		}
	}
 
	int top(){
		if(end >=0 ) return A[end];
		else cout<<"Stack is Empty"<<endl;
		return -1;
	}
 
	void pop(){
		if(end	>= 0){
		cout<<"removing the last element\n";
		end--;
		} else cout<<"Stack underflow"<<endl;
	}
 
	int Size(){
		return this->size = size;
	}
 
	bool isEmpty(){
		if(end == -1) return true;
		else return false;
	}
};
 
int main() {
	Stack s(10); //constructor is called on this line
	s.push(4);
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	// cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
 
	s.push(5);
	s.push(3);
	cout<<"front: "<<s.top()<<"\n";
	s.pop();
	// cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
 
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	// cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	return 0;
}
