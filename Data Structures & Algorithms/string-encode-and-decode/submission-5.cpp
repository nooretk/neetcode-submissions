class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(string i: strs) {
            encoded += to_string(i.length());
            encoded += '#';
            encoded += i;

        }
        return encoded;
    }

    vector<string> decode(string s) {
        cout << "s: " << s << '\n';
        vector<string> decoded;
        int i = 0;
        while (i < s.length()) {
            string num;
            while (s[i] != '#') {
                num += s[i];
                i++;
            }

            string word;
            int size = stoi(num);
            int next_word = i + 1 + size;
            int start_word = i + 1;

            for (int j = start_word; j < next_word; j++) {
                word += s[j];
            }

            decoded.push_back(word);
            word = "";
            i = next_word;
        }
        return decoded;
        
    }
};
