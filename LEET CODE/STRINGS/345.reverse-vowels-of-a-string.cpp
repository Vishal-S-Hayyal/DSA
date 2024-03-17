/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start
class Solution {
public:

    bool is_vowel(char ch){
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch ==  'i' || ch == 'o' || ch == 'u' ;
    }
    
    string reverseVowels(string s) {
        int l = 0;
        int h = s.size()-1;

        while(l <= h){
            if(is_vowel(s[l]) && is_vowel(s[h])){
                swap(s[l], s[h]);
                l++;
                h--;
            }
            else if(is_vowel(s[l])==0){
                l++;
            }
            else{
                h--;
            }
        }  
        return s;      
    }
};
// @lc code=end

