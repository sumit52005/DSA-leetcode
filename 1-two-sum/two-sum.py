class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n=len(nums)
        nmap={}

        for i in range(n):
            c=target-nums[i]
            if c in nmap:
                return [nmap[c],i]
            nmap[nums[i]]=i
        
        return []
   