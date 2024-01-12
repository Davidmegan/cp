// maximum product subarray
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int left = 1, right = 1, ans = INT_MIN;
        for(int i = 0; i < n; i++) {
            if(left == 0) left = 1;
            if(right == 0) right = 1;
            left*=nums[i];
            right*=nums[n-1-i];
            ans = max(ans,max(left,right));
        }
        return ans;
    }
};
