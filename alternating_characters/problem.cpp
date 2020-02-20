
#include "problem.hpp"

#include <iostream>

int alternatingCharacters(std::string s)
{
    int num_deletes = 0;
    char last_char = s[0];
    for (size_t index = 1; index < s.size(); index++)
    {
        if (last_char == s[index])
        {
            num_deletes++;
        }

        last_char = s[index];
    }

    return num_deletes;
}
