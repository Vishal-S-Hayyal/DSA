/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution {
public:

    void createmapping(string& s){
        char start = 'a';
        char mapping[256] = {0};

        for(auto ch : s){
            if(mapping[ch]==0){
                mapping[ch] = start;
                start++;
            }
        }
        for(int i = 0; i<s.length(); i++){
            char ch = s[i];
            s[i] = mapping[ch];
        }
        // cout<<s<<endl;
    }

    bool isIsomorphic(string s, string t) {
        createmapping(t);
        createmapping(s);

        if(t == s){
            return true;
        }
        return false;
    }
};
// @lc code=end

