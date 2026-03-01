class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        unordered_map<char,char> se;
        int len = s.length();

        for(int i = 0 ; i < len; i++){
            if(mp.count(s[i]) == 0 && se.count(t[i]) == 0){
                mp[s[i]] = t[i];
                se[t[i]] = s[i];
            }
            else{
                if(mp[s[i]] != t[i] || se[t[i]] != s[i]){
                    return false;
                }
            }
        }

        return true;


       
    }
};