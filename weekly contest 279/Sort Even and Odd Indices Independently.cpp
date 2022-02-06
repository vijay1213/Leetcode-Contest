class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> odd, even;
        
        for(int i = 0; i < n; i++) {
            if(i%2) {
                odd.push_back(nums[i]);
            } else {
                even.push_back(nums[i]);
            }
        }
            sort(odd.begin(), odd.end());
            reverse(odd.begin(), odd.end());
            
            sort(even.begin(), even.end());
            
            int o = 0;
            int e = 0;
            
            for(int i = 0; i < n; i++) {
                if(i%2) 
                    nums[i] = odd[o++];
                else 
                    nums[i] = even[e++];
                
            }
        
        return nums;
    
    }
};
