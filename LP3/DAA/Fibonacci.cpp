
//Assignment 1- 
//Write a program non-recursive and recursive program to calculate Fibonacci numbers and analyze their time and space complexity.

//Recursive program
//TC: O(2^n), SC: O(n)

/*#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    cout << "Enter n:"<<endl; 
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cout << fibonacci(i) << " ";
    }
}*/

//Non-recursive
//TC: O(n), SC: O(1)

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n:"<<endl; 
    cin >> n;
    int f0=0;
    int f1=1;
    cout << f0 << " "<< f1 << " ";
    for(int i=2;i<n;i++)
    {
        int f2=f0+f1;
        cout << f2 << " ";
        f0=f1;
        f1=f2;

    }
    return 0;
}*/