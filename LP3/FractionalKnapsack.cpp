//Assignment 3- 
//Write a program to solve a fractional Knapsack problem using a greedy method.
//TC: O(nlogn) //because of inbuilt sort function 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=2;
    float capacity;
    float value[n];
    float weight[n];
    float val_per_unit[n];
    
    //taking inputs
    cout << "Enter capacity: "<<endl; 
    cin>> capacity;
    cout << "Enter values:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> value[i];
    }
    cout << "Enter weights:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> weight[i];
    }   

    cout << "Capacity: "<<endl; 
    cout <<  capacity << endl;
    cout << "Values:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout << value[i] << " ";
    }
    cout << endl;
    cout << "Weights:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout << weight[i] << " ";
    }   
    cout << endl;

    //calculation value per unit weight
    for(int i=0; i<n; i++)
    {
        val_per_unit[i]=float(float(value[i])/float(weight[i]));
    }
    cout << "Per unit value:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << val_per_unit[i] << " ";
    } 
    cout << endl;

    //sort in descending order because we want the max profit 
    
    sort(val_per_unit, val_per_unit+n, greater<float>());

    cout << "After sorting:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout << val_per_unit[i] << " ";
    } 

    float profit=0.0;
    for(int i=0; i<n; i++)
    {
        if(weight[i] <= capacity)
        {
            capacity-=weight[i];
            profit+=value[i];
        }
        else
        {
            profit+=capacity*val_per_unit[i];
            break;
        }
    }
    cout << endl;
    cout << "Profit:"<<profit << endl;

    return 0;
}