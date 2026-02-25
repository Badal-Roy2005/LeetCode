class Solution {
public:
    string reverseWords(string s) {
        

        reverse(s.begin() , s.end());

        int i = 0;

        int len = s.size();
        string ans = "";
        while(i < len){

            while(i < len && s[i] == ' ')i++;

            string word ;

            while(i < len && s[i] != ' '){
                word += s[i];
                i++;
            }

            reverse(word.begin() ,word.end());


            if(!word.empty()){
                if(!ans.empty()){

                ans += ' ';
                }
            }
            ans += word;
           
        }

        return ans;
    }
};