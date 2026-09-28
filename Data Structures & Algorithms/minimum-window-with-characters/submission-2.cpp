class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> tmp;
        for (char c: t) tmp[c]++;



        int l = 0;
        unordered_map<char, int> mp;
        int ans = s.size();
        int start = 0;
        int end = 0;

        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
            while (is_valid(tmp, mp))
            {
                mp[s[l]]--;
                if (mp[s[l]] == 0) mp.erase(s[l]);
                l++;

                if (i - l + 1 < ans)
                {
                    ans = i - l + 1;
                    start = l - 1;
                    end = i + 1;
                }
            }

            
        }
        return s.substr(start, end - start);
    }

    bool is_valid(const unordered_map<char, int>& tmp, const unordered_map<char, int>& mp)
    {
        for (const auto& pair: tmp)
            if (mp.count(pair.first) == 0 ||
                mp.at(pair.first) < pair.second) return false;
             
        return true;
    }
};
