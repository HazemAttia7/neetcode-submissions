class Solution {
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() == 1 && t.length() == 1)
            return s == t;
        if (s.length() != t.length())
            return false;
        map<char, int> m{}, n{};
        for (char c : s)
            m[c]++;
        for (char c : t)
            n[c]++;
        for (int i = 0; i < s.length(); i++)
            if (m[s[i]] != n[s[i]])
                return false;

        return true;
    }
};
