#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &v, int n)
{
    int lo =0, hi = v.size()-1,mid=0;
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        if (mid == n) return mid;
        else if (mid < n) hi = mid - 1;
        else if(mid > n) lo = mid + 1;
        else return -1;
    }
}
int main()
{
    vector<int> arr = {6, 5, 4, 3, 2, 1};
    int target = 6;
    cout<<binarySearch(arr, target);
}
