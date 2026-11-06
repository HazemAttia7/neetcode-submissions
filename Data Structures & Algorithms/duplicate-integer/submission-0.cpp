#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool hasDuplicate(vector<int> &nums)
    {
        unordered_set<int> n;
        for (int num : nums)
            n.insert(num);
        return n.size() != nums.size();
    }
};