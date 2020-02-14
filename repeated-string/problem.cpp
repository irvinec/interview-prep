#include "problem.hpp"


long repeatedString(std::string s, long n)
{
    if (s.empty())
    {
        return 0;
    }

    long rep = n / s.size();
    long rem = n % s.size();
    // Count the number of a's
    long num_a = 0;
    long total = 0;
    for (int index = 0; index < s.size(); ++index)
    {
        if (s[index] == 'a')
        {
            ++num_a;
        }

        if (index == rem - 1)
        {
            total += num_a;
        }
    }

    total += num_a * rep;
    return total;
}
