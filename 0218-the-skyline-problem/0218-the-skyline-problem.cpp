
class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {

        std::vector<std::vector<int>> ans;
        std::priority_queue<std::pair<int, int>> pq;

        int x = 0;
        int x2 = 0;
        int i=0;
        while(i<buildings.size() || !pq.empty()) {
            if(pq.empty() ||
              (i<buildings.size() && pq.top().second >= buildings[i][0])) {
                x = buildings[i][0];
                if(pq.empty() || pq.top().first < buildings[i][2]) {
                    if(ans.empty() || ans.back()[0] != x) {
                        ans.emplace_back(std::vector<int>({x, buildings[i][2]}));
                    }
                    else {
                        ans.back()[1] = buildings[i][2];
                    }
                }
                pq.push(std::make_pair(buildings[i][2], buildings[i][1]));
                i++;
            }
            else {
                x = std::max(x, pq.top().second);
                while(!pq.empty() && pq.top().second <= x) {
                    pq.pop();
                }
                ans.emplace_back(std::vector<int>({x, pq.empty() ? 0 : pq.top().first}));
            }
        }

        return ans;
    }
};