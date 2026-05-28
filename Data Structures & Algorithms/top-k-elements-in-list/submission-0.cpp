class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<pair<int,int>> freq;
        int i = 0;
        while (i < nums.size()){
            int cnt = 1;
            int j = i + 1;
            while (j < nums.size()){
                if (nums[i] == nums[j]){
                    cnt++;
                    j++;
                }else{
                    break;
                }
            }
            freq.push_back({cnt,nums[i]});
            i = j;
        }
         sort(freq.begin(), freq.end(), greater<pair<int,int>>());
        vector<int> ans;
        for (int i = 0; i < k; i++){
            ans.push_back(freq[i].second);
        }
        return ans;
    }
};
