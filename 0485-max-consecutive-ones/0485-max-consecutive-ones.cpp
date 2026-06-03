class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int repeat = 0;
        int max_repeat = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==1){
                repeat++;
                if(max_repeat < repeat){
                    max_repeat = repeat;
                }
            }
                else{
                    repeat=0;
                }
            }
    return max_repeat;
    }
};