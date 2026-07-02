class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        int n = a.size();
        for(int i = 0 ;i < n;i++){

            while(a[i] > 0 && a[i] <= n && a[i] != a[a[i] - 1]){
                swap(a[i] , a[a[i] - 1]);
            }
        }

        int ans = 1;
        for(int i = 0  ;i < n;i++){
            if(a[i] != ans) return ans;
            ans++;
        }

        return ans;
    }
};