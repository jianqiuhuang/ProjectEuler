#include "Trie.cpp"

int main(){
	Trie test;
	test.insert("hello");
	std::cout << test.search("hello") << "--" << test.startWith("he") << "--" << test.search("ab") << std::endl;
	return 0;
}
