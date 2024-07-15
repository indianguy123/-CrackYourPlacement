class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int ans=0;
        int mini=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<mini){
                mini=nums[i];
            }
            ans=max(ans,nums[i]-mini);
        }
        return ans;
    }
};
