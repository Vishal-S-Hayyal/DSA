class Solution {
public:
    int compress(vector<char>& s) {
        int index=0;
        for(int i=0; i<s.size(); i++){
            int count = 1;
            while(i+1<s.size() && s[i] == s[i+1]){
                i++;
                count++;
            }
            s[index++] = s[i];
            if(count>1){
                for(auto ch : to_string(count)){
                    s[index++] = ch;
                }
            }
        }
        return index;
    }    
};
