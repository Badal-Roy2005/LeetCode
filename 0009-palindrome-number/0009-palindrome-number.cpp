class Solution {
public:
    bool isPalindrome(int x) {

        // x with tailing zero will never be a palindrom
        if(x < 0 || (x != 0 && x % 10 == 0)){
            return false;
        }

        // half revesal 
        long long rev = 0;
        while(x > rev){
            rev = rev * 10 + (x % 10);
            x /= 10;
        }
        // if even : rev == x;
        // if odd : x = rev / 10
        return rev == x || x == rev / 10;
    }
};
