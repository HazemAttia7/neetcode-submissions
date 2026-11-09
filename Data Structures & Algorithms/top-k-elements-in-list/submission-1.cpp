class Solution {
public:
   vector<int> topKFrequent(vector<int> &nums, int k)
    {
        map<int, int> cnts;
        for (int i = 0; i < nums.size(); i++)
            cnts[nums[i]]++;

        vector<pair<int, int>> v(cnts.begin(), cnts.end());

        sort(v.begin(), v.end(), [](auto a, auto b)
             { return a.second > b.second; });

vector<int> res;
        for (int i = 0; i < k && i < v.size(); i++)
        {
            res.push_back(v[i].first);
        }

        return res;
    }
};
