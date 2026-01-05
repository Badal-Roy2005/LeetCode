class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char , int> mp =
        {
            {'I' , 1},
            {'V' , 5},
            {'X' , 10},
            {'L' , 50},
            {'C' , 100},
            {'D' , 500},
            {'M' , 1000}
        };


        int len = s.length(); int sum = 0 ;

        for(int i = 0 ;i < len; i++){

            if(i + 1 < len && mp[s[i]] < mp[s[i+1]]){
                sum += mp[s[i+1]] - mp[s[i]];
                i+=1;
            }
            else{
                sum += mp[s[i]];
            }
        }
        

        return sum;

    }
};