class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        long s=0;
        int a= INT_MIN;
        for(int i=0;i<n;i++){
            s=s+nums[i];
            if(s>a){
                a=s;

            }
            if(s<0){
                s=0;

            }
        }
        return a;
    }
};
