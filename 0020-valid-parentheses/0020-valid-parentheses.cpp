class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        int len = s.length();

        for(int i = 0 ;i < len ;i++){
            if(s[i] == '(') a.push(')');
            else if(s[i] == '{') a.push('}');
            else if(s[i] == '[') a.push(']');
            else {
                if(a.empty()) return false;

                if(a.top() == s[i]) a.pop();
                else return false;
            }
        }

        if(a.empty()){
            return true;
        }
        return false;
    }
};