/*
 * @lc app=leetcode id=647 lang=cpp
 *
 * [647] Palindromic Substrings
 */

// @lc code=start
class Solution {
public:

    int expand(string s, int i, int j){
        int count1 = 0;
        while(i>=0 && j < s.length() && s[i]==s[j]){
            count1++;
            i--;
            j++;
        }
        return count1;
    }

    int countSubstrings(string s) {
       int count = 0;
        for(int center = 0; center<s.length(); center++){ 
            int oddkaans = expand(s,center,center);
            int evenkaans = expand(s,center,center+1);
            count  =  count + oddkaans + evenkaans;
    }
    return count;
    }
};
// @lc code=end

