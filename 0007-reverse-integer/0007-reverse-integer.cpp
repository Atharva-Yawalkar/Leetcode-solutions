class Solution {
public:
    int reverse(int x) {
        long long c = 0;
        while(x) {
            c = c*10 + x%10;
            x /= 10;
        }
        return (c<INT_MIN || c>INT_MAX) ? 0 : c;
    }
};