class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> S;
        int j = 0;
        for(int i=0; i<pushed.size(); i++){
            S.push(pushed[i]);
            while(S.size() > 0 && S.top() == popped[j]){
                S.pop();
                j++;
            }
        }
        return S.size() == 0;
    }
};