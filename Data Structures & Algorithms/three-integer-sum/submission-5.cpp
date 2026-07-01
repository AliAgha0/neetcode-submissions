
class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        // C++ equivalent to Arrays.sort()
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> outputArray;

        // Using size_t or casting to int to prevent overflow issues with .size()
        for (int i = 0; i < static_cast<int>(nums.size()) - 2; i++) 
        {
            // Replicating your clean duplicate-skipping condition
            if (i == 0 || (i > 0 && nums[i] != nums[i - 1])) 
            {
                int low = i + 1;
                int high = nums.size() - 1;
                int sum = 0 - nums[i];

                while (low < high) 
                {
                    if (nums[low] + nums[high] == sum) 
                    {
                        // Direct initialization list replaces Arrays.asList()
                        outputArray.push_back({nums[i], nums[low], nums[high]});
                        
                        while (low < high && nums[low] == nums[low + 1]) 
                        {
                            low++;
                        }
                        while (low < high && nums[high] == nums[high - 1]) 
                        {
                            high--;
                        }
                        low++;
                        high--;
                    } 
                    else if (nums[low] + nums[high] > sum) 
                    {
                        high--;
                    } 
                    else 
                    {
                        low++;
                    }
                }
            }
        }
        return outputArray;
    }
};