class Solution {
public:
    bool search(vector<vector<char>>& board,int i,int j,int idx, vector <vector <bool>> &visited,string word)
    {
        int r=board.size(),c=board[0].size();
        if(word.size()-1==idx)
            return true;
        visited[i][j]=true;
        if(i>0  &&  !visited[i-1][j] && word[idx+1]==board[i-1][j] && search(board,i-1,j,idx+1,visited,word))
            return true;
        if(i<r-1 && !visited[i+1][j] && word[idx+1]==board[i+1][j]  && search(board,i+1,j,idx+1,visited,word))
            return true;
        if(j>0  && !visited[i][j-1] && word[idx+1]==board[i][j-1] && search(board,i,j-1,idx+1,visited,word))
            return true;
        if(j<c-1  && !visited[i][j+1] && word[idx+1]==board[i][j+1] && search(board,i,j+1,idx+1,visited,word))
            return true;
        visited[i][j]=false;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int r=board.size(),c=board[0].size();
        vector <vector <bool>> visited(r,vector<bool> (c,false));
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                if(board[i][j]==word[0] && search(board,i,j,0,visited,word))
                    return true;
        return false;
    }
};