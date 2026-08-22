class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int sum2=0;
        for(int i=0;i<n;i++){
             sum+=nums[i];
             sum2+=i;
             
        }
        sum2+=n;
        
        //  for(int i=0;i<=n;i++){
        //      sum2+=i;
        //  }
         int result=sum2-sum;

        return result;
    }
};