#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int partition(std::vector<int> &nums, int lo, int hi){
    int pivot = nums[hi];
    int greater = lo;
    for(int lower = lo; lower < hi; lower++){
        if(nums[lower] <= pivot){
            swap(nums[lower], nums[greater]);
            greater++;
        }
    }
    swap(nums[greater], nums[hi]);
    return greater;
}

void helper(std::vector<int> &nums, int lo, int hi){
    if(lo < hi){
        int mid = partition(nums, lo, hi);
        helper(nums, lo, mid-1);
        helper(nums, mid+1, hi);
    }
}

void quickSort(std::vector<int> &nums){
    if(nums.empty())    return;
    helper(nums, 0, nums.size()-1);
}

int main(int argc, char **argv){
    std::vector<int> nums = {11, 2, 50, 20, 9, 10};
    quickSort(nums);
    for(int tmp : nums){
        std::cout << tmp << std::endl;
    }
    return 0;
}
