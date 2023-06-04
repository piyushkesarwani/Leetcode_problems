#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int provinces = 0;
        vector<bool> visited(n, false);
        for(int i = 0; i<isConnected.size(); i++){
            if(!visited[i]){
                provinces++;
                dfs(isConnected, visited, i);
            }
        }
        return provinces;
    }
    void dfs(vector<vector<int>> &isConnected, vector<bool> &visited, int node){
        visited[node] = true;
        for(int neighbor = 0; neighbor < isConnected.size(); neighbor++){
            if(isConnected[node][neighbor] == 1 && !visited[neighbor]){
                dfs(isConnected, visited, neighbor);
            }
        }
    }
};

int main(){
    Solution obj;
    obj.findCircleNum([[1, 1, 0], [1, 1, 0], [0, 0, 1]]);
    return 0
}