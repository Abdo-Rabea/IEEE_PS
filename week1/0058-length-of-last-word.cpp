class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        bool f=false;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' ')
                f=true, c++;
            else if(f)
                break;
        }
        return c;
    }
};