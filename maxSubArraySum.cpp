#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int maxSum(vector<int> nums){
    int result = 0, sum = 0;
    for(int i = 0; i < (int)nums.size(); i++){
        sum += nums[i];
        if(sum < 0)
            sum = 0;
        result = max(result, sum);        
    }
    return result;
}

int main(){
    vector<int> nums = {-1, 3, -2, 1, 4};
    cout << maxSum(nums) << endl;
    return 0;
}
