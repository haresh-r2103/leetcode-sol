class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        vector<bool> vis(arr.size(), false);
        return dfs(start, arr, vis);
    }

    bool dfs(int ind, vector<int>& arr, vector<bool>& vis){
        if(ind < 0 || ind >= arr.size()) return false;
        if(vis[ind]) return false;

        if(arr[ind] == 0) return true;
        vis[ind] = true;

        return dfs(ind+arr[ind], arr, vis) || dfs(ind-arr[ind], arr, vis);
    }
};