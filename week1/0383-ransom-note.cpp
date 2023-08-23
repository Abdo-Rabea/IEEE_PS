class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26]{0};
        memset(freq, 0, sizeof(freq));
        for(char l: magazine)
            freq[l-'a']++;
        for(char l: ransomNote){
            if(!freq[l-'a']--)
                return false;
        }
        return true;
    }
};