# Python implementation QuickSort using
# Hoare's partition Scheme.

import random

'''
The function which implements randomised
QuickSort, using Haore's partition scheme.
arr :- array to be sorted.
start :- starting index of the array.
stop :- ending index of the array.
'''
def quicksort(arr, start, stop):
    if(start < stop):
        pivotindex = partitionrand(arr,start, stop)
        
        quicksort(arr , start , pivotindex)
        quicksort(arr, pivotindex + 1, stop)

# This function generates random pivot,
# swaps the first element with the pivot
# and calls the partition function.
def partitionrand(arr , start, stop):
    randpivot = random.randrange(start, stop)
    
    arr[start], arr[randpivot] = arr[randpivot], arr[start]
    return partition(arr, start, stop)

'''
This function takes the first element
as pivot, places the pivot element at
the correct position in the sorted array.
All the elements are re-arranged according
to the pivot, the elements smaller than
the pivot is places on the left and
the elements greater than the pivot is
placed to the right of pivot.
'''
def partition(arr,start,stop):
    pivot = start # pivot
    i = start - 1
    j = stop + 1
    while True:
        while True:
            i = i + 1
            if arr[i] >= arr[pivot]:
                break
        while True:
            j = j - 1
            if arr[j] <= arr[pivot]:
                break
        if i >= j:
            return j
        arr[i] , arr[j] = arr[j] , arr[i]
        
array = [10, 7, 8, 9, 1, 5]
quicksort(array, 0, len(array) - 1)
print(array)
