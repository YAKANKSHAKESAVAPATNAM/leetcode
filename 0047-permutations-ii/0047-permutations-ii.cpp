class Solution {
public:
    void helper(vector<vector<int>>& ans,vector<int> nums,vector<int>v,int n,set<vector<int>>& s){
        if(v.size()==n){
            if(s.find(v)==s.end()){
                ans.push_back(v);
            }
            s.insert(v);
        }
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]);
            vector<int>r;
            for(int j=0;j<nums.size();j++){
                if(i==j) continue;
                r.push_back(nums[j]);
            }
            helper(ans,r,v,n,s);
            v.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        int n=nums.size();
        set<vector<int>>s;
        helper(ans,nums,v,n,s);
        return ans;
    }
};