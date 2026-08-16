class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n =nums.size();
        map<int,int >map;
        for(int i=0;i<n;i++){
            int  num =nums[i];
            int need=target-num;
            if(map.find(need)!=map.end()){
                return {map[need],i};
            }
            map[num]=i;

        }
        return{-1,-1};
    }
};