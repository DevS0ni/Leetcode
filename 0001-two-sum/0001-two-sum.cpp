class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*
        // The Easy way of solving this (Not good enough though)..

        // Flag variable
        int flag = 0; 

        // Resultant Vector: To return when the solution is captured
        vector<int> result;

        // Iteration through the nums loop.
        for(auto it1 = nums.begin(); it1 != nums.end() && flag == 0; ++it1){
            auto it2 = find(it1 + 1, nums.end(), target - *it1);
            if (it2 != nums.end()){
                result.push_back(it1 - nums.begin());
                result.push_back(it2 - nums.begin());
                // To exit the loop.
                flag = 1;
            }
        }
    return result;
    */

    // Another way of solving this question using HashMap:

    unordered_map<int, int> sol_map;
    for(int i = 0; i < nums.size(); ++i){
        int num = nums[i];
        int complement = target - num;
        auto it = sol_map.find(complement);
        if(it != sol_map.end()){
        return{it->second, i};
        }
        sol_map[num]=i;
    }
    return{};
    }
};