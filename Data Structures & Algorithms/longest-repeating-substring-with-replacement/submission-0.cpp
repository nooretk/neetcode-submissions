class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int ans = 0;
        int l = 0;
        int maxFreq = 0;

        for (int r = 0; r < s.size(); r++)
        {
            mp[s[r]]++;
            maxFreq = max(mp[s[r]], maxFreq);

            while ((r - l + 1) - maxFreq > k)
            {
                mp[s[l]]--;
                l++;
            }

            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};
