class Solution {
public:
    bool isPalindrome(int x) {
        long rem = 0;
        int temp = x;
        while(x > 0){
            rem = rem * 10 + x % 10;
            x = x / 10;
        };
        return rem == temp;
    }
};