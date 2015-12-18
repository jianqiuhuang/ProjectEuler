#ifndef _TRIE_H
#define _TRIE_H

#include<iostream>
#include<vector>
#include<string>

class Node{
	public:
		std::vector<Node*> table;
		bool isWord;
		char value;
		Node(){
			this->isWord = false;
			this->value = '\0';
			table.resize(26, NULL);
		}
		Node(char c){
			this->isWord = false;
			this->value = c;
			table.resize(26, NULL);
		}
};

class Trie{
	public:

		Trie(){
			root = new Node();
		}	
		void insert(std::string s){
			auto head = root;
			for(char c:s){
				int index = c - 'a';
				if(head->table[index] == NULL)
					head->table[index] = new Node(c);
				head = head->table[index];
			}
			head->isWord = true;
		}
		bool search(std::string s){
			auto head = root;
			for(char c:s){
				int index = c - 'a';
				if(head->table[index] == NULL || head->table[index]->value != c)
					return false;
				head = head->table[index];
			}
			if(head->isWord)
				return true;
			else
				return false;
		}
		bool startWith(std::string s){
			auto head = root;
			for(char c:s){
				int index = c - 'a';
				if(head->table[index] == NULL || head->table[index]->value != c)
					return false;
				head = head->table[index];
			}
			return true;
		}
	private:
		Node *root;
};
#endif
