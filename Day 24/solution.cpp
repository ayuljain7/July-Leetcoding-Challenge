class Solution {
public:
    void dfs(vector<vector<int>> &paths,vector<int> &path,vector<vector<int>>& graph,int curr)
    {
        path.push_back(curr);
        if(curr==graph.size()-1)
        {
            paths.push_back(path);
            path.resize(path.size()-1);
            return ;
        }
        
        for(int i=0;i<graph[curr].size();i++)
        {
            dfs(paths,path,graph,graph[curr][i]);
        }
        path.resize(path.size()-1);
        return ;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> paths;
        vector<int> path;
        dfs(paths,path,graph,0);
        return paths;
    }
};