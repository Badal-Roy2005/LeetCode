class Solution {
public:
    int missingNumber(vector<int>& a){
        
        int len =  a.size();

        int sum = 0;
        for(int i = 0 ;i  < len ; i++){
            sum += a[i];
        }

        
        return (len * (len + 1) ) / 2 - sum ; 
    }
};