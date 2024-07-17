class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            int j=i+1,k=nums.size()-1;
            while(j<k){
                int val=nums[i]+nums[j]+nums[k];
                if(val==0){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                } 
                else if(val<0) j++;
                else k--;
            }
        }
        vector<vector<int>> ans;
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
    }
};
