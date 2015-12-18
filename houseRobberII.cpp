#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int maxValue(vector<int> nums){
	if(nums.empty())	return 0;
	vector<int> result(nums.size()+1, 0);
	result[1] = nums[0];
	for(int i = 2; i< (int)result.size(); i++){
		result[i] = max(result[i-1], result[i-2]+nums[i-1]);	
		
		cout << i << "__" << result[i] << endl;
	}
	return result[result.size()-1];
}

int roundList(vector<int> nums){
	vector<int> tmp1(nums.begin(), nums.end()-1);
	vector<int> tmp2(nums.begin()+1, nums.end());
	int val1 = maxValue(tmp1);
	int val2 = maxValue(tmp2);
	return max(val1,  val2);
}
int main(int argc, char **argv){
	vector<int> tmp = {8, 2, 9, 10, 1, 21};
	cout << roundList(tmp) << endl;
	return 0;
}
