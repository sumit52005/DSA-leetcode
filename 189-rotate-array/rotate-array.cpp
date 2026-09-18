
class Solution {
public:
    void inv(vector<int>& nums, int st, int end){
        while(st < end){
            swap(nums[st], nums[end]);
            st++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        inv(nums, 0, n-1);
        inv(nums, 0, k-1);
        inv(nums, k, n-1);
    }
};
// time O(n) space (1)
// [1,2,3,4,5,6,7] k = 3
// [5,6,7,4,3,2,1]
// st = 3, end = 6, m=4
