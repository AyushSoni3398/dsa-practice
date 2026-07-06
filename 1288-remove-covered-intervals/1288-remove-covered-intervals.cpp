class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;

        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b){
            if(a[0] == b[0]) return a[1] > b[1];
            return a[0] < b[0];
        });

        int maxend = -1;
        for(auto x : intervals){
            int l = x[0];
            int r = x[1];
            if(ans.empty() || r>maxend){
                ans.push_back({l,r});
                maxend = max(maxend,r);
            }
            else continue;
        }
        return ans.size();
    }
};