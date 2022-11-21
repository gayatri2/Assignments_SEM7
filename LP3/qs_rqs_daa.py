#simple quick sort

# def partition(arr, low, high):
#     pivot = arr[high]
#     i = low - 1

#     for j in range(low, high):
#         if arr[j] <= pivot:
#             i = i + 1
#             arr[i], arr[j] = arr[j], arr[i]
#     arr[i+1], arr[high] = arr[high], arr[i+1]
#     return i+1

# def quicksort(arr, low, high):
#     if low < high:
#         pi = partition(arr, low, high)
#         quicksort(arr, low, pi-1)
#         quicksort(arr, pi+1, high)

# arr = [10, 7, 8, 9, 1, 5]
# quicksort(arr, 0, len(arr)-1)
# print(arr)

#randomized quick sort
# import random

# def partition(arr, low, high):
#     i = low - 1
#     j = high + 1
#     pivot = low
#     while True:
#         while True:
#             i=i+1
#             if arr[i] >= arr[pivot]:
#                 break
#         while True:
#             j=j-1
#             if arr[j] <= arr[pivot]:
#                 break
#         if i>=j:
#             return j
#         arr[i], arr[j] = arr[j], arr[i]
# def quicksort(arr, low, high):
#     if low < high:
#         pivotindex = pivotrand(arr, low, high)
#         quicksort(arr, low, pivotindex)
#         quicksort(arr, pivotindex+1, high)

# def pivotrand(arr, low, high):
#     randind = random.randrange(low, high)
#     arr[low],arr[randind] = arr[randind],arr[low]
#     return partition(arr, low, high)

# arr = [10, 7, 8, 9, 1, 5]
# quicksort(arr, 0, len(arr)-1)
# print(arr)
