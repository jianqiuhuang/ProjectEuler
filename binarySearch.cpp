#include<iostream>
#include<vector>

int helper(std::vector<int> nums, int lo, int hi, int target){
    if(lo <= hi){
        int mid = lo + (hi-lo)/2;
        std::cout << "mid: " << nums[mid] << std::endl;
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] < target)
            return helper(nums, mid+1, hi, target);
        else
            return helper(nums, lo, mid-1, target);
    }
    return -1;
}
int binarySearchRecursive(std::vector<int> nums, int target){
    if(nums.empty())    return -1;
    return helper(nums, 0, nums.size()-1, target);
}

int binarySearchIterative(std::vector<int> nums, int target){
    int lo = 0, hi = nums.size() - 1, mid;
    while(lo <= hi){
        mid = lo + (hi-lo)/2;
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] < target)
            lo = mid+1;
        else
            hi = mid-1;
    }
    return -1;
}
int main(int argc, char **argv){
    std::vector<int> nums = {1, 3, 5, 9, 19, 300};
    std::cout << binarySearchIterative(nums, 19) << std::endl;
    std::cout << binarySearchIterative(nums, 0) << std::endl;
    return 0;
}
