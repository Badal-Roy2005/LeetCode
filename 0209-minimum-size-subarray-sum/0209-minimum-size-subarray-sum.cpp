class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        int n = a.size();
        long long sum = 0 ;

        int j = 0 ;
        int m = INT_MAX;
        for(int i = 0 ; i < n;i++){
            sum += a[i];
            
                while(sum >= target){
                    m = min(m , i - j + 1);
                    sum -= a[j];
                    j++;
                }
            

        }
       
        if(m == INT_MAX){
            return 0;
        }
        
        return m; 
    }
};