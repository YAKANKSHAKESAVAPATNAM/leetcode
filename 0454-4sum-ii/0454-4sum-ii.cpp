class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n=nums1.size();
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<n;i++){
            int s=nums1[i];
            for(int j=0;j<n;j++){
                s+=nums2[j];
                mp1[s]++;
                 s-=nums2[j];
            }
        }
        int c=0;
         for(int i=0;i<n;i++){
            int s=nums3[i];
            for(int j=0;j<n;j++){
                s+=nums4[j];
                 int k=-1*s;
                if(mp1.find(k)!=mp1.end()){
                    c++;
                    mp1[k]--;
                    if(mp1[k]==0) mp1.erase(k);
                }
                s=s-nums4[j];
            }
        }
        return c;
    }
};