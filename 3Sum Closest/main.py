class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        n = len(nums)
        closest = nums[0] + nums[1] + nums[n-1]
        for i in range(0,n-2):
            j=i+1
            k=n-1
            while j<k:
                curr_sum = nums[i]+nums[j]+nums[k]
                if curr_sum<=target:
                    j+=1
                else:
                    k-=1
                if abs(closest-target)>=abs(curr_sum-target):
                    closest = curr_sum
        return closest
