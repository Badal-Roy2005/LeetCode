class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        int n = a.size();
        set<vector<int>> ans;
        sort(a.begin() , a.end());
        for(int i = 0 ; i <n ;i++){
            int j = i + 1;
            int k = n - 1;
            
            while(j < k){
                if(a[i] + a[j] + a[k] == 0) {
                    ans.insert({a[i] , a[j] , a[k]});
                    j++;
                    k--;
                }
                else if(a[i] + a[j] + a[k] < 0)j++;
                else k--; 
            }
        }
        return vector<vector<int>> (ans.begin() , ans.end());
    }
};