class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a(26) , b(26);
        if(s.size() != t.size()) return false;
        for(auto it : s) a[it-'a']++;
        for(auto it : t) b[it-'a']++;

        for(auto it : s){
            if(a[it-'a'] != b[it-'a']) return false;
        }
        return true;
    }
};