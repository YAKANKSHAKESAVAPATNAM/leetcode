class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int min_diff = INT_MAX;      
        int closest_sum = 0;  
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                for(int k = j + 1; k < n; k++){
                    int current_sum = nums[i] + nums[j] + nums[k];
                    
                    int current_diff = abs(target - current_sum);
                    
                    if(current_diff < min_diff){
                        min_diff = current_diff;
                        closest_sum = current_sum;
                    }
                }
            }
        }
        return closest_sum;
    }
};