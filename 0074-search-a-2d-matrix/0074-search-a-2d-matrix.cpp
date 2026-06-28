class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int m=arr.size();
        int n=arr[0].size();
        int lo=0,hi=m*n-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            int row=mid/n,col=mid%n;
            if(arr[row][col]>target) hi=mid-1;
            else if(arr[row][col]<target)lo=mid+1;
            else return 1;
        }
        return 0;


    } 
};