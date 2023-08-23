class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        short freq[26];
        memset(freq, 0, sizeof(freq));
        for(char l: s)
            freq[l-'a']++;
        for(char l:t)
            if(!freq[l-'a']--)
                return false;
        return true;
    }
};