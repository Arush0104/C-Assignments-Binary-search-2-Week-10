#include <iostream>
#include <vector>
using namespace std;
bool check(vector<vector<int>> &arr, int target)
{
    int m = arr.size(), n = arr[0].size(), mid = 0;
    int lo = 0, hi = (m * n) - 1;
    while (lo <= hi)
    {
        mid = (hi + lo) / 2;
        if (arr[mid / n][mid % n] == target)
            return true;
        else if (arr[mid / n][mid % n] > target)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return false;
}
int main()
{
    vector<vector<int>> arr = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;
    if(check(arr, target)) cout<<"Present";
    else cout<<"Absent";
}
