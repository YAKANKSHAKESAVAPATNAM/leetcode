class Solution {
public:
    typedef pair<int,int> pi;
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n=tasks.size();
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            v.push_back({tasks[i][0],tasks[i][1],i});
        }
        sort(v.begin(),v.end());
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        int idx=0;
        long long curr=0;
        vector<int>ans;
        while(idx<n||pq.size()){
            if(pq.empty() && curr<v[idx][0]) curr=v[idx][0];
            while(idx<n && curr>=v[idx][0]){
                pq.push({v[idx][1],v[idx][2]});
                idx++;
            }
        curr+=pq.top().first;
        ans.push_back(pq.top().second);
        pq.pop();
        }
    return ans;
    }
};