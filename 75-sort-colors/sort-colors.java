class Solution {
    public void sortColors(int[] nums) {
        int start=0;
        int current=0;
        int end=nums.length-1;
    
        while(current<=end && start<=end){
            if(nums[current]==0){
            //swap(nums[current],nums[start]);
            int temp=nums[current];
            nums[current]=nums[start];
            nums[start]=temp;
            current++;
            start++;
        }
        else if(nums[current]==1){
            current++;
        }
        else{
            //swap(nums[current],nums[end]);
            int t = nums[current];
            nums[current]=nums[end];
            nums[end]=t;

            end--;
            
        }
        }

    }
}