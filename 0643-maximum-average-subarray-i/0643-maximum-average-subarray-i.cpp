class Solution {
public:
    double findMaxAverage(vector<int>& a, int k) {
        int n = a.size();
        double sum = 0;
        double avg = 0;
        for(int i =0 ;i < k; i++){
            sum += a[i];
        }
        avg = sum / k;
        
        for(int i = k ; i < n;i++){
            sum += a[i];
            sum -= a[i - k];
            avg = max(avg , sum / k);
        }

    return avg;
        
    }
};