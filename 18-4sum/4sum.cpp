class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> uniqueRes;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    long long sum3 = (long long)nums[i] + nums[j] + nums[k];
                    long long missing = (long long)target - sum3;

                    for (int m = 0; m < n; m++) {
                        if (m != i && m != j && m != k && nums[m] == missing) {
                            vector<int> temp = {nums[i], nums[j], nums[k], (int)missing};
                            sort(temp.begin(), temp.end());
                            uniqueRes.insert(temp);
                            break;
                        }
                    }
                }
            }
        }

        return vector<vector<int>>(uniqueRes.begin(), uniqueRes.end());
    }
};