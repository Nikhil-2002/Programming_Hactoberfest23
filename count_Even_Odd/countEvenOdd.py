# Initialize an array of integers
arr = [2, 5, 8, 9, 12, 7, 6]

# Initialize counters for even and odd elements
evenCount = 0
oddCount = 0

# Iterate through the array using a for loop
for num in arr:
    # Check if the current element is even
    if num % 2 == 0:
        evenCount += 1
    else:  # If it's not even, it's odd
        oddCount += 1

# Print the counts of even and odd elements
print("Even count:", evenCount)
print("Odd count:", oddCount)
