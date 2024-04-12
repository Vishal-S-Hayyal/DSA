class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1) return 1;

        int ans = climbStairs(n-1) + climbStairs(n-2);

        return ans;
    }
};

// Not proper solution later done with DP
