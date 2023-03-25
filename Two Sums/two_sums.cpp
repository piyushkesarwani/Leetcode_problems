class Solution{
    public: 
        vector<int> twosums(vector<int>& nums, int target){
            vector<int> ans;
            for(int i=0; i<nums.size(); i++){
                int a=nums[i];
                for(int j=i+1; j<nums.size(); j++){
                    int b=nums[j];
                    if((a+b) == target){
                        ans.push_back(i);
                        ans.push_back(j);
                    }
                }
            }
            return ans;
        }
};