from typing import List
#方法一：暴力枚举
class Soultion:
    def twoSum(self,nums:List[int],target:int)->List[int]:
        n=len(nums)
        for i in range(n):
            for j in range(i+1,n):
                if nums[i]+nums[j]==target:
                    retrun [i,j]
        return[]
##方法二：哈希表
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashtable = dict()
        for i, num in enumerate(nums):
            if target - num in hashtable:
                return [hashtable[target - num], i]
            hashtable[nums[i]] = i
        return []