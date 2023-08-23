class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int ret =1e4 ;
        map<char,int> mp {{'b',0}, {'a',0}, {'l',0}, {'o',0},{'n',0}};
        for(auto l : text){
            if(mp.count(l))
                mp[l]++;
        }
        mp['l']/=2, mp['o']/=2;
        for(auto l : mp){
            ret = min(ret, l.second);
        }
        return ret;
    }
};