class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int n = a.size();
        int i = 0;
        for(int j = 0 ; j < n ;j++){
            if(a[j] != 0){
                swap(a[i++] , a[j]);
            }
        }
    }
};