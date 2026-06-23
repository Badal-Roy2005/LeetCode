class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> a(26,0) , b(26,0);
        for(auto it : s) a[it - 'a']++;
        for(auto it : t) b[it - 'a']++;
        char c = '\0';
        for(int i = 0 ;i < 26;i++){
            if(a[i] != b[i]) {
                c = i + 'a';
                break;
            }
        }

        return c;

        
        
    }
 };