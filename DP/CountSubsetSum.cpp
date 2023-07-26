#include <iostream>
#include <vector>

int countSubsetSum(std::vector<int> &nums, int targetSum)
{
    int n = nums.size();

    // Create a 2D DP array with dimensions (n+1) x (targetSum+1)
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(targetSum + 1, 0));

    // Base case: If the targetSum is 0, there is one empty subset
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= targetSum; j++)
        {

            if (j == 0)
                dp[i][j] = 1;
        }
    }

    // Fill the DP array using bottom-up approach
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= targetSum; ++j)
        {
            // If the current number is greater than the target sum, skip it
            if (nums[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                // Otherwise, add the number of subsets without and with the current number
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - nums[i - 1]];
            }
        }
    }

    return dp[n][targetSum];
}

int main()
{
    std::vector<int> nums = {1, 1, 1, 1, 1};
    int targetSum = 3;

    int result = countSubsetSum(nums, targetSum);
    std::cout << "Number of subsets with sum " << targetSum << ": " << result << std::endl;

    return 0;
}
