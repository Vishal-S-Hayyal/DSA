/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
       int freq_table[256] = {0};

       for(int i = 0; i<s.length(); i++){
        freq_table[s[i]]++;
       } 

       for(int i = 0; i<t.length(); i++){
        freq_table[t[i]]--;
       }

        for(int i = 0; i<256; i++){
            if(freq_table[i] != 0){
                return false;
            }
        }
    return true;
    }
};
// @lc code=end

