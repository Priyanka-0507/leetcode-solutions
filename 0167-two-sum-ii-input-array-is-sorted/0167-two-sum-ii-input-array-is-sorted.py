class Solution:
    def twoSum(self, numbers: list[int], target: int) -> list[int]:
        left=0
        right=len(numbers)-1

        while left<right:
            res=numbers[left]+numbers[right]
            
            if res<target:
                left=left+1
            elif res>target:
                right=right-1
            else:
                return [left+1,right+1]