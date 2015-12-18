#include<iostream>
#include<string>


std::string stringReverse(std::string s){
	if(s.empty()) return s;
	std::string result="";
	for(int i = (int)s.length()-1; i >=0; i--){
		result += s[i];
	}
	return result;
}

std::string strRev(std::string s){
	if(s.empty())	return s;
	for(int i = 0; i < (int)s.length()/2; i++){
		char tmp = s[i];
		s[i] = s[s.length()-1-i];
		s[s.length()-1-i] = tmp;
	}
	return s;
}

int main(int argc, char** argv){
	std::string tmp = "Leo";
	tmp = strRev(tmp);
	std::cout << tmp << std::endl;
	return 0;
}
