class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for (const auto& str: strs)
        {
            int len = str.size();
            res = res + to_string(len) + '#' + str;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while (i < s.size())
        {
            string word;
            string len;
            while (s[i] != '#')
            {
                len += s[i];
                i++;
            }
            i++;
            for (int j = 0; j < stoi(len); j++)
            {
                word += s[i];
                i++;
            }
            ans.push_back(word);
        }
        return ans;
    }
};
