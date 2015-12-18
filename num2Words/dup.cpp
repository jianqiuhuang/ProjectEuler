#include<iostream>
#include<string>

using namespace std;

string helper(int num, int *integer, string *word, int index){
	if(num == 0)	return "";
	while(num < integer[index])
		index++;
	int remain, quot;
	quot = num / integer[index];
	remain = num % integer[index];
	return ((index < 4) ? helper(quot, integer, word, index) : "") + word[index] + " " + helper(remain, integer, word, index);
}
string numberToWord(int num){
	if(num < 1)	return 0;
	int integer[] = {1000000000, 1000000, 1000, 100, 90, 80, 70, 60, 50, 40, 30, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	string word[] = {"Billion", "Million", "Thousand", "Hundred", "Ninety", "Eighty", "Seventy", "Sixty", "Fifty", "Forty", "Thirty", "Twenty", "Nineteen", "Eighteen", "Seventeen", "Sixteen", "Fifteen", "Fourteen", "Thirteen", "Twelve", "Eleven", "Ten", "Nine", "Eight", "Seven", "Six", "Five", "Four", "Three", "Two", "One"};
	string result = helper(num, integer, word, 0);
	return result;
}

int main(int argc, char **argv){
	cout << numberToWord(999000000);
	return 0;
}
