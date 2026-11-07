class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         int index, i;
        for (i = 0; i < nums.size(); i++)
        {
            int sub = target - nums[i];
            auto it = find(nums.begin() + i + 1, nums.end(), sub);
            if (it != nums.end())
            {
                index = distance(nums.begin(), it);
                if (index != i)
                    break;
            }
        }
        return {i, index};
    }
};
