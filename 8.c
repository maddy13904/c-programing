#include <bits/stdc++.h>
using namespace std;
 
int findFirst(int arr[], int n, int x)
{sort(arr, arr + n);
int* ptr = lower_bound(arr, arr + n, x);
 return (*ptr != x) ? -1 : (ptr - arr);
}
 int main()
{
int x=60 , arr[] = { 10, 30, 20, 50, 20 };
int n = sizeof(arr) / sizeof(arr[0]);
cout << findFirst(arr, n, x);
return 0;
}
