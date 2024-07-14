class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1;
        int curr=nums[0];
        int ans=1;
        while(j<nums.size()){
            if(nums[j]!=curr){
                curr=nums[j];
                i++;
                nums[i]=curr;
                j++;
                ans++;

            }
            else{
                j++;
                //i++;
            }
        }
        return ans;
    }
};
