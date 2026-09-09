class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l = 0 
        r =len(nums) - 1
        res = nums[l]
        IndexOfSmallest = 0
        while l<=r:
            if nums[l] < nums[r]:
                if res > nums[l]:
                    IndexOfSmallest = l
                break
            m = int((l+r)/2)
            if res > nums[m]:
                    IndexOfSmallest = m
            res = min(res, nums[m])
            if nums[l] <= nums[m]:
                l = m + 1
            else:
                r = m - 1


        l1 = 0
        r1 = IndexOfSmallest - 1
        l2 = IndexOfSmallest
        r2 = len(nums) - 1

        while l1<=r1:
            m = (l1 + r1) //2
            if target == nums[m]:
                return m

            if target > nums[m]:
                l1 = m + 1
            else:
                r1 = m - 1

        while l2<=r2:
            m = (l2 + r2) //2
            if target == nums[m]:
                return m

            if target > nums[m]:
                l2 = m + 1
            else:
                r2 = m - 1     


        return -1            






                    
