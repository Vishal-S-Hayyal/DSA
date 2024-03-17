class Solution {
public:
    string reorganizeString(string s) {
        int hash[26] = {0};

        for(int i=0; i<s.size(); i++){
            hash[s[i]-'a']++;
        }
        // find the most occurant element
        char max_freq_char;
        int max_freq = INT_MIN;
        for(int i=0; i<26; i++){
            if(hash[i]>max_freq){
                max_freq=hash[i];
                max_freq_char = i + 'a';
                // cout<<max_freq<<endl;
                // cout<<max_freq_char;
            }
        }
        int index=0;
        while(max_freq > 0 && index<s.size()){
            s[index] = max_freq_char;
            max_freq--;
            index+=2;
        }
        if(max_freq != 0){
            return "";
        }

        hash[max_freq_char - 'a'] = 0;

        for(int i=0; i<26; i++){
            while(hash[i]>0){
                index = index >= s.size() ? 1: index;
                hash[i]--;
                s[index] = i + 'a';
                index += 2;

            }
        }


        return s;
    }
};