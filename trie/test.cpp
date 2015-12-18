#include<iostream>
#include<vector>

using namespace std;

class Node{
	public: 
		Node(int val){
			this->table.resize(26, NULL);
			this->value = val;	
		}
		Node* get(int index){
			return this->table[index];
		}
		int getValue(){
			return this->value;
		}	
	private:
		vector<Node*> table;
		int value;
};

int main(){
	Node root(0);
	auto next = root.get(0);
	next = new Node(1);
	cout << root.get(0)->getValue() << endl;
	return 0;
}
