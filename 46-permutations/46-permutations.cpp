class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> curr;
        unordered_map<int, int> map;
        for (int i=0;i<nums.size();i++) map[nums[i]]++;
        generatePermutations(map, curr, output, size(nums));
        return output;
    }
    
    void generatePermutations(unordered_map<int, int>& map, vector<int>& curr, vector<vector<int>>& output, int n) {
        if (size(curr) == n) {
            output.push_back(curr);
            return;
        }
        for (auto [key, value] : map) {
            if (value == 0) continue;
            curr.push_back(key); --map[key];
            generatePermutations(map, curr, output, n);
            curr.pop_back(); ++map[key];
        }
    }
    
    
    
    
    
    
    
    
};