class Solution {
public:
    bool solve(int ind,int r,int c,string word,vector<vector<char>>& board){
        if(ind==word.size()) return true;
        int n=board.size();
        int m=board[0].size();
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        char t=board[r][c];
        board[r][c]='!';
        for(int i=0;i<4;i++){
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(nr>=0&&nr<n&&nc>=0&&nc<m&&board[nr][nc]==word[ind]){
                if(solve(ind+1,nr,nc,word,board)==true) return true;
            }
        }
        board[r][c]=t;
        return false;

    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(solve(1,i,j,word,board)==true) return true;
                }
            }
        }
        return false;
    }
};
