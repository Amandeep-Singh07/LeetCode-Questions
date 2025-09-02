// int remaining = target - nums[i]; → O(1) (simple arithmetic).

// mp.find(remaining) → This is the important one.

// Since mp is a balanced binary search tree (std::map in C++),

// Lookup (find) takes O(log n) time in the worst case.

// mp[nums[i]] = i; → Insertion into the map also takes O(log n).

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            
            map<int,int> mp;
            for (int i = 0; i < nums.size(); i++) {
                int remaining=target-nums[i];
    
                if(mp.find(remaining)!=mp.end()){
                    return {mp[remaining],i};
                }
                mp[nums[i]]=i;
            }
        
        return {};
        }
    };