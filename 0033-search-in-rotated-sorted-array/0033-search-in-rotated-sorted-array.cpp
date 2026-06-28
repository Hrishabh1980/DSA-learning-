class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n= arr.size();
        int lo=0,hi=n-1;
        while (lo<=hi){
            int m=lo+(hi-lo)/2;
            if(arr[m]==target) return m;
            if(arr[lo]<=arr[m]){
                if(arr[lo]<=target && target<arr[m])hi=m-1;
                else lo=m+1;

            }
            else{
                if(arr[m]<=target&& target<=arr[hi]) lo=m+1;
                else hi=m-1;
            }
        }
        return -1;

    }
};