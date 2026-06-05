class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        int n = s.length();
        int i = 0 ;
        while(i < n){
            if(s[i] != t[i]) return t[i];
            i++;

       }
       return t[i];
    }
};