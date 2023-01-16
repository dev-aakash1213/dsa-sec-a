class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans(2);
        map<int, int> Count;

        for(vector<int>& i : matches){
             int winner = i[0];
             int loser = i[1];

            if(!Count.count(winner))
            Count[winner] = 0;
            ++Count[loser];
        }

        for(auto& [player, nLosses]: Count)
        if(nLosses < 2)
        ans[nLosses].push_back(player);

        return ans;
    }
};
