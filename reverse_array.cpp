vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    int i=0;
    while(i<n/2) {
        swap(nums[i], nums[n-i-1]);
        i++;
    }
    return nums;
}
