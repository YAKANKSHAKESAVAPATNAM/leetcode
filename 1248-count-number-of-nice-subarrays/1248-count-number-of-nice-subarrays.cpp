class Solution {
public:
    int atMost(vector<int> nums,int k){
        int i=0,j=0;
        int n=nums.size();
        int c=0,ans=0;
        while(j<n){
            c+=(nums[j]%2);
            while(c>k){
                c-=(nums[i]%2);
                i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};