class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;int n=nums.size();
        unordered_map<int,int> hash;
        for(int i=0;i<n;i++)
        {
            int f=target-nums[i];
            if(hash.find(f)!=hash.end())
            return {i,hash[f]};
            hash[nums[i]]=i;
        }
        return {};        
    }
};