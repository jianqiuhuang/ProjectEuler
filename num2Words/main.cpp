#include<iostream>
#include<string>

using namespace std;

class Solution {
    string helper(int num, int th_level, int*threshold, string* digit)
    {
        int remain, div_n;
        if(!num) return "";
        for(; num < threshold[th_level] ; ++th_level);
        div_n = num/threshold[th_level];
        remain = num % threshold[th_level];
        return (th_level<4?helper(div_n, th_level, threshold, digit):"") +  digit[th_level] +  helper(remain, th_level, threshold, digit);
    }

public:
    string numberToWords(int num) {
        int threshold[] = {1000000000, 1000000, 1000, 100, 90, 80, 70, 60,50, 40,30,20,19, 18, 17, 16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
        string digit[] = {"Billion ", "Million ", "Thousand ", "Hundred ", "Ninety ","Eighty ", "Seventy ","Sixty ", "Fifty ", "Forty ", "Thirty ", "Twenty ", "Nineteen ", "Eighteen ", "Seventeen ", "Sixteen ", "Fifteen ", "Fourteen ", "Thirteen ", "Twelve ","Eleven ", "Ten ","Nine ", "Eight ", "Seven ", "Six ", "Five ", "Four ", "Three ","Two ", "One "};
        if(!num) return "Zero";
        string res = helper(num, 0, threshold, digit);
        res.pop_back();
        return res;
    }
};

int main(){
	Solution test;
	cout << test.numberToWords(1000000);
	return 0;
}
