class Solution {
public:
     bool canShip(int cap,vector<int>& weights, int days){
        int c=cap,d=1;
        for(int wt: weights){
            if (c-wt>=0){
                c-=wt;
            }
            else {
                d++;
                c=cap;
                c-=wt;
            }
        }
        return (d<=days);

     }

    int shipWithinDays(vector<int>& weights, int days) {
       int mx = weights[0],sum = 0;
       for(int ele:weights){
         mx= max(mx,ele);
         sum +=ele;

       }
       int lo =mx,hi  =sum,ans =sum;
       while(lo<=hi){
        int mid =lo+(hi-lo)/2;
        if(canShip(mid,weights,days)==true){
        ans=mid;
        hi=mid-1;
       }
       else{
        lo=mid+1;
       }
       }
       return ans;
    }
    
    
};