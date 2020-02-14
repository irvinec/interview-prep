
#include "problem.hpp"

int hourglassSum(const std::vector<std::vector<int>>& arr)
{
    int maxSum = -10000;
    for (int row = 0; row < arr[0].size() - 2; row++)
    {
        for (int col = 0; col < arr.size() - 2; col++)
        {
            int sum =   arr[row][col]   + arr[row][col+1]   + arr[row][col+2]
                                        + arr[row+1][col+1] +
                        arr[row+2][col] + arr[row+2][col+1] + arr[row+2][col+2];
            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }
    }
    return maxSum;
}
