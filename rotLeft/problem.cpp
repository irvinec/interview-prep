
#include "problem.hpp"

std::vector<int> rotLeft(const std::vector<int>& a, const int d)
{
    int rot_factor = d % a.size();
    if (rot_factor == 0)
    {
        return a;
    }

    std::vector<int> result(a.size());
    for (int index = rot_factor, to_ind = 0;
        index < a.size() + rot_factor, to_ind < a.size();
        index++, to_ind++)
    {
        result[to_ind] = a[index % a.size()];
    }

    return result;
}
