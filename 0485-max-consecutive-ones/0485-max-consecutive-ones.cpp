class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        int n = a.size();
        int count = 0;
        int m = -1;
        for(int i = 0 ;i <n;i++){
            if(a[i] == 1){
                count++;
            }
            else{
                count = 0;
            }

            m = max( m , count);
        }

        return m;
    }
};