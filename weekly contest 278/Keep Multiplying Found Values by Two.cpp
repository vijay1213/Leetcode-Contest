class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for(int j = 0; j < n; j++) {
            if(nums[j]==original) {
                original *= 2;
            }
            
        }
        return original;
        
    }
};
