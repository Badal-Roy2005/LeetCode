class Solution {
public:
    long long maximumHappinessSum(vector<int>& a, int k) {
        
        long long sum = 0 ;
        sort(a.begin(),a.end());
        int i = a.size() - 1;
        int j = 0;
        while(k--){

            if(a[i] - j > 0){
            sum += a[i] - j;

            }
            else{
                break;
            }

            j++;
            i--;
        }

        return sum ;
    }
};


auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();