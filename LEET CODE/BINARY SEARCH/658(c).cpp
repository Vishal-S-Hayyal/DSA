class Solution {
public:

       int lowerbound(vector<int> &arr, int x){
       int start = 0; 
       int end = arr.size()-1;
       int ans = end;
       while(start<=end){
           int mid = (start+end)/2;
           if(arr[mid]>=x){
               ans = mid;
               end = mid-1;
           }
           else if(x>arr[mid]){
               start = mid+1;
           }
           else{
               end = mid-1;
           }
       }
       return ans;
   }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

    //  brute force approach

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
    
    //2 pointer approach

    // int l=0;
    // int h = arr.size()-1;
    // while(h-l >= k){
    //     if(x-arr[l]>arr[h]-x){
    //         l++;
    //     }
    //     else{
    //         h--;
    //     }

    // }
    // return vector<int> (arr.begin()+l,arr.begin()+h+1);

    //binary search 
    int h = lowerbound(arr,x);
    int l = h-1;
    while(k--){
        if(l<0){
            h++;
        }
        else if(h >= arr.size()){
            l--;
        }
        else if(x-arr[l] > arr[h]-x){
            h++;
        }
        else{
            l--;
        }
        } 
    return vector<int> (arr.begin()+l+1, arr.begin()+h);
    }

};