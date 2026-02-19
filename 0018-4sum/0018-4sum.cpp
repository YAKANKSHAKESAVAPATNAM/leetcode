class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size()-3;i++){
            for(int j=i+1;j<nums.size()-2;j++){
                int k=j+1;
                int l=nums.size()-1;
                int s=nums[i]+nums[j];
                vector<int>v;
                while(k<l){
                    if(s+nums[k]+nums[l]==target){
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[k]);
                        v.push_back(nums[l]);
                        ans.push_back(v);
                        v.clear();
                    }
                    if(s+nums[k]+nums[l]<target) k++;
                    else l--;
                }
            }
        }
        sort(ans.begin(), ans.end()); 
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};