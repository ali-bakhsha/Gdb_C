#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node(int x , Node* next=nullptr):data(x) , next(next){}
};

int main(){
	
	Node a(1 , NULL);
	Node b(2 , NULL);
	
	cout << "a.x: " << a.data << " a.next: " << a.next << endl;
	cout << "b.x: " << b.data << " b.next: " << b.next << endl;
	
	
	return 0;
}