class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int ans=0;
        while(i<=j){
            ans=max(ans,(j-i)*min(height[j],height[i]));
            if(height[i]>height[j]) j--;
            else i++;
        }
        return ans;
    }
};
