/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i = 0;
        while(true){
            char curr_ch = 0;
            for(auto str : strs){
                if(i >= str.size()){
                    curr_ch = 0;
                    break;
                }
                if(curr_ch == 0){
                    curr_ch = str[i];
                }
                else if(curr_ch != str[i]){
                    curr_ch = 0;
                    break;
                }
            }
            if(curr_ch == 0){
                break;
            }
            ans.push_back(curr_ch);
            i++;
        }
        return ans;
    }
};
// @lc code=end

