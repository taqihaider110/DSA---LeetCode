class Solution:
    def maxArea(self, heights: List[int]) -> int:
        max_area = 0
        left = 0
        right = len(heights)-1
        print(right)

        while(left < right):
            container_height = min(heights[left], heights[right])
            area = container_height * abs(left-right)
            max_area = max(max_area, area)
            
            if heights[left] > heights[right]:
                right -= 1
            else:
                left += 1

        return max_area