/*
 * @lc app=leetcode id=2325 lang=cpp
 *
 * [2325] Decode the Message
 */

// @lc code=start
class Solution {
public:
    string decodeMessage(string key, string message) {
        
        // character mapping
        char start = 'a';
        char table[300] = {0};

        for(auto ch : key){
            if(ch != ' ' && table[ch]==0){
                table[ch] = start;
                start++;
            }
        }
        // decoding
        string ans;
        for(auto ch : message){
            if(message[ch]==' '){
                ans.push_back(' ');
            }
            else{
                char decode = message[ch];
                ans.push_back(decode);
            }
        }
        return ans;
    }
};
// @lc code=end

