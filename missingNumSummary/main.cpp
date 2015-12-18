#include<iostream>
#include<string>
#include<vector>
using namespace std;

string helper(int a, int b){
	return (a == b) ? to_string(a) + ", " : to_string(a) + "-" + to_string(b) + ", "; 
}

string func(vector<int> &num, int lo, int hi){
	if(num.empty())	return helper(lo, hi);
	string result;
	int i = 1;
	//Check before the first element
	if(num[0] != lo)	result += helper(lo, num[0]-1);
	
	//Check btween elements
	for(; i < (int)num.size(); i++){
		if(num[i] > hi)	break;
		if(num[i] != num[i-1]+1)
			result += helper(num[i-1]+1, num[i]-1);
	}
	
	//Last element or the last element that is less than or equal to hi 
	if(num[i-1] < hi)
		result += helper(num[i-1]+1, hi);

	result.pop_back();
	result.pop_back();
	return result;
}

int main(){
	vector<int> num;
	num.push_back(4);
	num.push_back(5);
	num.push_back(8);
	num.push_back(17);
	cout << func(num, 0, 13) << endl;
	cout << func(num, 0, 100) << endl;
	cout << func(num, 0, 17) << endl;
}
