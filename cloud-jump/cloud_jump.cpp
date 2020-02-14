
#include "cloud_jump.hpp"

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(std::vector<int> c)
{
    int jumps = 0;
    int current_cloud = 0;
    while (current_cloud < c.size() - 1)
    {
        if (current_cloud + 2 < c.size() && c[current_cloud + 2] == 0)
        {
            current_cloud += 2;
        }
        else
        {
            ++current_cloud;
        }

        ++jumps;
    }

    return jumps;
}
