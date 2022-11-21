//Assignment 4 - 
//Write a program to solve a 0-1 Knapsack problem using dynamic programming or branch and bound strategy.

//Recursive   TC: O(2^n)
/*#include<bits/stdc++.h>
using namespace std;

int knapsack(int val[], int wt[], int capacity, int n)
{
    if(n==0 || capacity==0)
        return 0;
    if(wt[n-1] > capacity)
        return knapsack(val, wt,capacity,n-1);
    else //if(wt[n-1] <= capacity)
        return max(val[n-1]+knapsack(val, wt,capacity-wt[n-1],n-1), knapsack(val,wt,capacity, n-1));
}
int main()
{
    int num=3;
    int val[num];
    int wt[num];
    cout << "Enter elements of value array:"<<endl;
    for(int i = 0; i < num; i++)
    {
        cin >> val[i];
    }
    cout << "Enter elements of weight array:"<<endl;
    for(int i = 0; i < num; i++)
    {
        cin >> wt[i];
    }
    int capacity;
    cout << "Enter capacity:"<<endl;
    cin >> capacity;

    cout << "Output:" << knapsack(val, wt, capacity, num);


    return 0;
}*/

//DP  TC: O(n^2)

/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int num=3;
    int val[num];
    int wt[num];
    cout << "Enter elements of value array:"<<endl;
    for(int i = 0; i < num; i++)
    {
        cin >> val[i];
    }
    cout << "Enter elements of weight array:"<<endl;
    for(int i = 0; i < num; i++)
    {
        cin >> wt[i];
    }
    int capacity;
    cout << "Enter capacity:"<<endl;
    cin >> capacity;

    int t[num + 1][capacity+ 1]; // DP matrix

	for (int i = 0; i <= num; i++) {
		for (int j = 0; j <= capacity; j++) {
			if (i == 0 || j == 0) // base case // filling 1st row and 1st column of the matrix with zero as per the base condition of the recursive solution 
				t[i][j] = 0;
			else if (wt[i - 1] <= j) { // current wt can fit in bag // this is for the choice diagram of the recursive solution
				int val1 = val[i - 1] + t[i - 1][j - wt[i - 1]]; // take current wt // and after taking weight substract the inserted weight from the final weight 
				int val2 = t[i - 1][j]; // skip current wt
				t[i][j] = max(val1, val2);
			}
			else if (wt[i - 1] > j) // current wt doesn't fit in bag
				t[i][j] = t[i - 1][j]; // move to next
		}
	}

	cout <<  t[num][capacity];
    
    return 0;
}*/