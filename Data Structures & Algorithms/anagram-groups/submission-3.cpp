class Solution {
public:
   vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<string> strsCopy = strs;
        for (string &str : strsCopy)
            sort(str.begin(), str.end());

        unordered_map<string, vector<int>> m;
        for (int i = 0; i < strs.size(); i++)
            m[strsCopy[i]].push_back(i);

        vector<vector<string>> g;
        unordered_set<string> t(strsCopy.begin(), strsCopy.end());
        vector<string> strsCopySet(t.begin(), t.end());

        for (int i = 0; i < strsCopySet.size(); i++)
        {
            vector<string> v;
            for (int j = 0; j < m[strsCopySet[i]].size(); j++)
                v.push_back(strs[m[strsCopySet[i]][j]]);
            g.push_back(v);
        }

        return g;
    }
};
