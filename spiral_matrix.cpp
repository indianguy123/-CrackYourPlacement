class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int sr=0,sc=0,er=n-1,ec=m-1;
        int c=0;
        int total=n*m;
        vector<int> ans;
        while(c<n*m){
            for(int i=sc;i<=ec&&c<total;i++){
                ans.push_back(matrix[sr][i]);
                c++;
            }
            sr++;
            for(int i=sr;i<=er&&c<total;i++){
                ans.push_back(matrix[i][ec]);
                c++;
            }
            ec--;
            for(int i=ec;i>=sc&&c<total;i--){
                ans.push_back(matrix[er][i]);
                c++;
            }
            er--;
            for(int i=er;i>=sr&&c<total;i--){
                ans.push_back(matrix[i][sc]);
                c++;
            }
            sc++;

        }
        return ans;
    }

};
