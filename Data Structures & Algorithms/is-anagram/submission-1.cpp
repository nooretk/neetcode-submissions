class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> myMap1;
        unordered_map<char, int> myMap2;

        for (int i = 0; i < s.length(); i++)
        {
            myMap1[s[i]]++;
            myMap2[t[i]]++;
        }
    return (myMap1 == myMap2);
    }
};
