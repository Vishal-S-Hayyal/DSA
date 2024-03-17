class Solution {
public:

    int countDevices(string &binary){
        int c=0;
        for(int i=0; i<binary.size(); i++){
            if(binary[i] == '1'){
                c++;
            }
        }
        return c;
    }

    int numberOfBeams(vector<string>& bank) {
        vector<int> devices;
        for(auto row:bank){
            int count = countDevices(row);
            if(count != 0){
                devices.push_back(count);
            }
        }
        int count=0;
        for(int i=0; i<devices.size(); i++){
            if(i+1 < devices.size()){
                count += devices[i]*devices[i+1];
            }
        }
        return count;
    }
};
