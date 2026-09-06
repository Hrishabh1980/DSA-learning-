class Solution {
public:
   
           vector<int> canSeePersonsCount(vector<int>& height) {
        int n = height.size();
        vector<int> res(n), stack;
        for (int i = 0; i < n; ++i) {
            while (!stack.empty() && height[stack.back()] <= height[i])
                res[stack.back()]++, stack.pop_back();
            if (!stack.empty())
                res[stack.back()]++;
            stack.push_back(i);
        }
        return res;
    }
    
};