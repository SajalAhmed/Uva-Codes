def permutation(arr, nums, idx):
    if len(arr) == 3:
        print(arr)
    else:
        for i in range (0, len(nums)):
            arr.append(nums[i])
            permutation(arr + nums[0: i], nums[i + 1: len(nums)], i + 1)
            arr.pop()



permutation([], [1, 2, 3], 0)
