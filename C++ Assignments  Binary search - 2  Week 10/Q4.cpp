#include <iostream>
#include <vector>
using namespace std;
int PBS(vector<int> &nums, int target)
{
    int l = 0;
    int r = nums.size() - 1;

    while (l <= r)
    {
        int m = (l + r) / 2;
        if (nums[m] == target) return m;

        if (nums[l] <= nums[m])
        {
            if (nums[l] <= target && target < nums[m]) r = m - 1;
            else l = m + 1;
        }
        else
        {
            if (nums[m] < target && target <= nums[r]) l = m + 1;
            else  r = m - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> v = {4, 5, 6, 6, 7, 0, 1, 2};
    int target = 6;
    cout<<PBS(v, target);
}
