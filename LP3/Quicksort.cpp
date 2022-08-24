//Assignment 6
//Write a program for analysis of quick sort by using deterministic and randomized variant.

//Deterministic variant
//If every time the last (or first element or element at any position, just that it has to be the same position every time the data set is divided)
// is used as the pivot to partition then it is Deterministic Quick sort.


/*#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end) 
{
    int pivot=arr[end];
    int pindex=start;

    for(int i=start; i<end; i++)
    {
        if(arr[i] <= pivot)
        {
            swap(arr[i], arr[pindex]);
            pindex=pindex+1;
        }

    }
    swap(arr[pindex], arr[end]);
    return pindex;
}
void quickSort(int arr[], int start, int end) 
{
    if(start < end)
    {
        int pi=partition(arr, start, end);
        quickSort(arr, start, pi-1);
        quickSort(arr,pi+1, end);
    }
}
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    quickSort(arr, 0, n - 1); 
    cout << "Sorted array: \n"; 
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    } 
    return 0; 
}*/


//Randomized
//If every time, a random element is picked as pivot element

// C++ implementation of QuickSort
// using Hoare's partition scheme

/*#include<bits/stdc++.h>
using namespace std;

// This function takes last element as
// pivot, places the pivot element at
// its correct position in sorted
// array, and places all smaller
// (smaller than pivot) to left of pivot
// and all greater elements to right
int partition(int arr[], int low, int high)
{
	int pivot = arr[low];
	int i = low - 1, j = high + 1;

	while (true) {

		// Find leftmost element greater than
		// or equal to pivot
		do {
			i++;
		} while (arr[i] < pivot);

		// Find rightmost element smaller than
		// or equal to pivot
		do {
			j--;
		} while (arr[j] > pivot);

		// If two pointers met
		if (i >= j)
			return j;

		swap(arr[i], arr[j]);
	}
}

// Generates Random Pivot, swaps pivot with
// end element and calls the partition function
// In Hoare partition the low element is selected
// as first pivot
int partition_r(int arr[], int low, int high)
{
	// Generate a random number in between
	// low .. high
	srand(time(NULL));
	int random = low + rand() % (high - low);

	// Swap A[random] with A[high]
	swap(arr[random], arr[low]);

	return partition(arr, low, high);
}

// The main function that implements QuickSort
// arr[] --> Array to be sorted,
// low --> Starting index,
// high --> Ending index
void quickSort(int arr[], int low, int high)
{
	if (low < high) {
		// pi is partitioning index,
		// arr[p] is now at right place
		int pi = partition_r(arr, low, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi);
		quickSort(arr, pi + 1, high);
	}
}

// Function to print an array
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver Code
int main()
{
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, n - 1);
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}*/
