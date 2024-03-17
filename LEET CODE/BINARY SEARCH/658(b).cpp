class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    //     vector<pair<int,int>> diff;
    //     for(int i=0; i<arr.size(); i++){
    //         diff.push_back({abs(x-arr[i]), arr[i]});
    //     }
    //     sort(diff.begin(), diff.end());
    //     vector<int> result;
    //     for(int i=0; i<k; i++){
    //         result.push_back(diff[i].second);
    //     }
    //     sort(result.begin(),result.end());
    // return result;
    
    int l=0;
    int h = arr.size()-1;
    while(h-l >= k){
        if(x-arr[l]>arr[h]-x){
            l++;
        }
        else{
            h--;
        }

    }
    return vector<int> (arr.begin()+l,arr.begin()+h+1);
    }

};