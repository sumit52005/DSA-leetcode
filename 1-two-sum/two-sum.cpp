class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();  // taking the size of the given array
        map<int,int> sol;  // taking an unordered map to store the elements with their indexes
        for(int i=0;i<n;i++){
            int remain=target-nums[i];                 // it is required number which we will search in the given map
            if(sol.find(remain)!=sol.end()){           // if we find the remaining value in the map 
                int j= sol[remain];                    // we will fetch the index if the remaining value
                return{j,i};                           // return the index of the values
            }
            sol[nums[i]]=i;                             // we will add the array values in the map
        }

        return {};
    }
};