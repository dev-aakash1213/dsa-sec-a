#include <iostream>
using namespace std;
 
//complete the functions
class Node{
public:
int data;
int next;

Node(int val){
  this->data = val;
  this->next = NULL;
}
};


class Stack{
	Node* top;
 
	public:
	//constructor is called whenever an object of the class is declared
	Stack(){
		top = NULL;
	}
 
	//push the value at the back
	void push(int data){
		Node* temp = new Node (data);
    if(!temp){
      cout<<"Stack Overflow"<<endl;
    }

    temp->data = data;
    temp->next = top;
    top = temp;
	}
 
	int peek(){
	if (!isEmpty())
            return top->data;
        else
            exit(1);
	}
 
	void pop(){
    Node* temp;
    if(top == NULL){
		cout<<"Stack Underflow\n";
    }
    else{
      temp = top;
      top = top -> next;
    }
	}
 
	int size(){
		int count = 0;
    Node* current = head; 
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
	}
 
	bool isEmpty(){
		return top == NULL;
    }
};
 
int main() {
	Stack s; //constructor is called on this line
	s.push(4);
	cout<<"top: "<<s.peek()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
 
	s.push(5);
	s.push(3);
	cout<<"front: "<<s.peek()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
 
	cout<<"top: "<<s.peek()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	return 0;
}
