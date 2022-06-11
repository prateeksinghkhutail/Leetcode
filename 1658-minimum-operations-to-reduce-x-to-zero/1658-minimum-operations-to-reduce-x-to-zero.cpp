class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
       int target = -x;
for (int num : nums) target += num;

if (target == 0) return nums.size();  // since all elements are positive, we have to take all of them

unordered_map<int,int>map;
map[0]=-1;
int sum = 0;
int res = INT_MIN;

for (int i = 0; i < nums.size(); ++i) {

	sum += nums[i];
	if (map.find(sum-target)!=map.end()) {
		res = max(res, i - map[sum-target]);
	}

    // no need to check containsKey since sum is unique
	map[sum]=i;
}

return res == INT_MIN ? -1 : nums.size() - res; 
    }
};