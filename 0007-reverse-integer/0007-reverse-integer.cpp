class Solution {
public:
    int reverse(int n) {


          long long rev = 0;
            while(n != 0){
                rev = (rev * 10) + (n % 10);
                n/=10;
            }


        if(rev > INT_MAX || rev < INT_MIN){
            return 0;
        }

            return rev ;
    }
};