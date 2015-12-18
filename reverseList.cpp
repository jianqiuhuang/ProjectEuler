#include<iostream>

class Node{
	public:
		Node(){
			this->value = 0;
			this->next = NULL;
		}
		Node(int v){
			this->value = v;
			this->next = NULL;
		}
		void setNext(Node *next){
			this->next = next;
		}
		int getValue(){
			return this->value;
		}
		Node* getNext(){
			return this->next;
		}
	private:
		Node *next;
		int value;
};

class List{
	public:		
		List(){
			this->root = new Node();
			this->last = this->root;
		}
		void printList(){
			Node *head = this->root->getNext();
			while(head){
				std::cout << head->getValue() << std::endl;
				head = head->getNext();
			}
		}
		void addNode(int v){
			Node *newNode = new Node(v);
			this->last->setNext(newNode);
			this->last = last->getNext();
		}
		Node* getMidNode(){
			Node *head = root->getNext();
			Node *back = head;
			while(back && back->getNext() && (back->getNext())->getNext()){
				head = head->getNext();
				back = (back->getNext())->getNext();
			}
			return head;
		}
		~List(){
			Node *head = this->root;
			while(head){
				Node *tmp = head->getNext();
				delete head;
				head = tmp;
			}
		}
	private:
		Node *root;
		Node *last;
};

int main(){
	List test;
	for(int i = 1; i < 11; i++){
		test.addNode(i);
	}
	test.printList();
	Node *tmp;
	tmp = test.getMidNode();
	std::cout << tmp->getValue() << std::endl;


	
	return 0;
}
