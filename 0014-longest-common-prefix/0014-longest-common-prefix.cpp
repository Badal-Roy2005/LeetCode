class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin() , strs.end());


        int i = strs[0].length();
        int j = strs[strs.size() - 1].length();


        int k = 0 ;
        string s ;

        while(k < i && k < j){
            if(strs[0][k] == strs[strs.size() - 1][k]){
                s += strs[0][k];
                k++;
            }
            else{
                break;
            }
        }

        return s;

        }
};