def solution(nums):
    unique_types = len(set(nums))
    max_pickable = len(nums) // 2
    return min(unique_types, max_pickable)

   