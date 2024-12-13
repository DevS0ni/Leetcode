class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Here we need to find the sum of the contigious
        // sub - array from the passed array nums..
        
        // Solving this using Kaden's Algorithm.
        if (nums.size() == 0){
            return 0;
        }
    
        int current_sum = nums[0];
        int max_sum = nums[0];
    
        for (int i = 1; i < nums.size(); ++i) {
            current_sum = max(nums[i], current_sum + nums[i]);
            max_sum = max(max_sum, current_sum);
        }
        return max_sum;
    }
};