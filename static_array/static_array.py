# Insert element n into the arr at the end
# capacity is the number of elements array can store
# length is the number of elements in the array
def insertEnd(arr, n, length, capacity):
    # check if we have capacity
    if length < capacity:
        # store the element at the end
            arr[length] = n
    # increment the length
    length += 1

# overwrite the last element with number 0
def removeEnd(arr, length):
    # check if we have at least one element in the array
    if length > 0:
        arr[length - 1] = 0
    # decrement the length
    length -= 1 

# insert the element in the middle of array
# shift the elements to the right through by one position
# then insert the element at the ith index
def insertMiddle(arr, i, n, length):
    # shifting the elements by one position
    for i in range(length - 1, i - 1, -1):
         arr[i + 1] = arr[i] 
    # insert the element
    arr[i] = n

    # increment the length
    length += 1

# [1, 2, 3, 4]
def removeMiddle(arr, i, length):
    # start from index i + 1
    # overwrite the element i with i + 1
    for i in range(i + 1, length):
         arr[i - 1] = arr[i]

    # overwrite the last element with 0
    arr[length] = 0

    # decrement the length by 1
    length -= 1

# iterate through the array elements from start to finish
def printArr(arr, capacity):
    for i in range(capacity):
        print(arr[i], end=' ')