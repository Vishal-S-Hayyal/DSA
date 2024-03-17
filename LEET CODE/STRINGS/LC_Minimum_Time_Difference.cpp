class Solution {
public:

    int convertToMin(string& time){
        int hr = stoi(time.substr(0,2));
        int min = stoi(time.substr(3,2));

        return hr*60+min;
    }

    int findMinDifference(vector<string>& timePoints) {
        vector<int> mins;
        for(auto time: timePoints){
            mins.push_back(convertToMin(time));
        }
        sort(mins.begin(), mins.end());
        int diff = INT_MAX;
        for(int i=0; i!=mins.size()-1; i++){
            if((mins[i+1]-mins[i]) < diff){
            diff = (mins[i+1] - mins[i]);
            }
        }
        diff = min(diff, 1440 - (mins.back() - mins.front()));
        return diff;
    }
};