# Coding Challenge: The Lucky Integer
#
# Find the number in the array that occurs exactly as many times as its
# numerical value. Return the largest one if multiple exists.
#
# Sample input:
# [2, 2, 3, 4]
#
# Sample output: 2
#
# Sample input:
# [1, 2, 2, 3, 3, 3]
#
# Sample output: 3

def find_lucky(arr):
    lucky = -1
    size = len(arr)

    for i in range(size):
        count = 0

        for j in range(size):
            if arr[j] == arr[i]:
                count += 1

        if count == arr[i] and arr[i] > lucky:
            lucky = arr[i]

    return lucky


arr = [1, 2, 2, 3, 3, 3]
result = find_lucky(arr)
print(result)