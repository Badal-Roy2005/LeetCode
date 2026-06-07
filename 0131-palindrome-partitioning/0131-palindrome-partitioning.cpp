class Solution {
public:
    bool isPalindrome(string s){
        int i = 0;
        int j = s.length() - 1;
        while(i < j){
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    } 
    void solve(int ind , vector<vector<string>>& ans , vector<string>& temp , string s , int n){
        if(ind == n){
            ans.push_back(temp);
            return;
        }

        for(int i = 1 ; i <= n - ind; i++){
            if(isPalindrome(s.substr(ind , i))){
                temp.push_back(s.substr(ind , i));
                solve(ind + i, ans , temp , s  , n);
                temp.pop_back();
            }

        }
    }
    vector<vector<string>> partition(string s) {
        int n = s.length();
        vector<vector<string>> ans;
        vector<string> temp;
        solve(0 , ans , temp , s , n);
        return ans;
    }
};