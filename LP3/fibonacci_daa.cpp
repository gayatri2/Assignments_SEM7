#include <bits/stdc++.h>
using namespace std;

// recursive
//  int fibo(int n)
//  {
//      if (n == 0)
//          return 0;
//      if (n == 1)
//          return 1;
//      return fibo(n - 1) + fibo(n - 2);
//  }
//  int main()
//  {
//      int n = 5;
//      for (int i = 0; i < n; i++)
//      {
//          cout << fibo(i) << " ";
//      }
//  }

// iterative
// int main()
// {
//     int f0 = 0;
//     int f1 = 1;
//     int n = 5;
//     cout << f0 << " " << f1 << " ";
//     for (int i = 2; i < n; i++)
//     {
//         int f2 = f0 + f1;
//         cout << f2 << " ";
//         f0 = f1;
//         f1 = f2;
//     }
// }