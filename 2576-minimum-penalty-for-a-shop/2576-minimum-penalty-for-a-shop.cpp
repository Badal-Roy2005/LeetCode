class Solution {
public:
    int bestClosingTime(string s) {

        int cur = 0;
        int min = 0;
        int best = 0;

        int len = s.length();

        for(int i =0 ;i < len ;i++){
            if(s[i] == 'Y'){
                cur--;
            }
            else{
                cur++;
            }

            if(cur < min){
                best = i+1;
                min = cur;
            }
        }

        return best;
    }
};