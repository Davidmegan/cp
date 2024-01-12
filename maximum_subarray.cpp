class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int ans = INT_MIN, sum = 0; 
        for(int i = 0; i < nums.size(); i++) {
            sum = max(nums[i],sum+nums[i]);
            ans = max(ans,sum);
        }
        return ans;
    }
};
