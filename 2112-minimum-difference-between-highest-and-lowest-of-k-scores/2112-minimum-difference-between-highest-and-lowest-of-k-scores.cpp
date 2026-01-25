class Solution {
public:
    int minimumDifference(vector<int>& a, int k) {
        if(k == 1) return 0;
        sort(a.begin() , a.end());
        int len = a.size();
        int mini = INT_MAX;
        for(int i = 0 ;i <= (len - k);i++){
            mini = min(mini , a[i + k - 1] - a[i]);
        }

        return mini;
    }
};