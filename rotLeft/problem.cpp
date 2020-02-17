
#include "problem.hpp"

std::vector<int> rotLeft(const std::vector<int>& a, const int d)
{
    int rot_factor = d % a.size();
    if (rot_factor == 0)
    {
        return a;
    }

    std::vector<int> result(a.size());
    for (int index = 0; index < a.size(); index++)
    {
        int from_index = (index + rot_factor) % a.size();
        result[index] = a[from_index];
    }

    return result;
}
