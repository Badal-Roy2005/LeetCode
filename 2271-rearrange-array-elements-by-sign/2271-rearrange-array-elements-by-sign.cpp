class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
        int n = a.size();  
        vector<int> b(n);

        int i = 0;
        int j = 1;
        for(auto &it : a){
            if(it > 0){
                b[i] = it ;
                i+=2;
            }
            else{
                b[j] = it ;
                j+=2;
            }
        }

        return b;
    }
};