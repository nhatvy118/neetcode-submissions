class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string,int>> tmp;

        for (int i = 0; i < strs.size(); i++) {
            string t = strs[i];
            sort(t.begin(), t.end());
            tmp.push_back({t, i});
        }

        sort(tmp.begin(), tmp.end());

        vector<vector<string>> ans;

        for (int i = 0; i < tmp.size(); ) {
            vector<string> group;

            int j = i;

            while (j < tmp.size() && tmp[j].first == tmp[i].first) {
                group.push_back(strs[tmp[j].second]);
                j++;
            }

            ans.push_back(group);

            i = j;
        }

        return ans;
    }
};