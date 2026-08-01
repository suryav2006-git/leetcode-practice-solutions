class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n = score.size();

        priority_queue<pair<int,int>> preq;

        for(int i =0 ;i<n ; i++) {
            preq.push({score[i][k],i});
        }

        vector<vector<int>> result;

        while(!preq.empty()) {
            auto x = preq.top();
            preq.pop();

            result.push_back(score[x.second]);
        }
        return result;
    }
};