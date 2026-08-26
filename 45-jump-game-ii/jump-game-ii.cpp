class Solution {
public:
    int jump(vector<int>& nums) {
        int ans=0;
        int far=0;
        int end=0;
        for(int i =0;i<nums.size()-1;i++){ 
            far=max(far,nums[i]+i);
            if(far>= nums.size()-1){
                ans++;
                return ans;
            }
            if(i==end){
                ans++;
                end =far;
            }
        }
        return ans;
    }
};