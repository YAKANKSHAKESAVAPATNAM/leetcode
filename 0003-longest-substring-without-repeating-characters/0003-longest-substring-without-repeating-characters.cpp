class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(s[i])==mp.end()) mp[s[i]]++;
            else break;
        }
        int si=mp.size();
        int k=si;
        int j=0;
        int c=INT_MIN;
        while(k<s.size()){
            if(mp.find(s[k])==mp.end()){
                 mp[s[k]]++;
                  
                  si=max(si,c);
                  k++;
            }
           else{
                mp[s[j]]--;
                if(mp[s[j]]==0) mp.erase(s[j]);
                j++;
            }
            c = k - j;         
            si = max(si, c); 
        }
        return si;
    }
};