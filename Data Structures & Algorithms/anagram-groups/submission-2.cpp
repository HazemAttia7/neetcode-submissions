class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> g;
        for (int i = 0; i < strs.size(); i++)
        {
            if (strs[i] == "0")
                continue;
            vector<string> v;
            v.push_back(strs[i]);
            for (int j = i + 1; j < strs.size(); j++)
            {
                if (isAnagram(strs[i], strs[j]))
                {
                    v.push_back(strs[j]);
                    strs[j] = "0";
                }
            }
            g.push_back(v);
        }
        return g;
    }

    bool isAnagram(string s, string t)
    {
        if (s.length() == 1 && t.length() == 1)
            return s == t;
        if (s.length() != t.length())
            return false;
        map<char, int> m{}, n{};
        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
            n[t[i]]++;
        }
        for (int i = 0; i < s.length(); i++)
            if (m[s[i]] != n[s[i]])
                return false;

        return true;
    }
};
