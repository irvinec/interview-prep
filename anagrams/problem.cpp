
#include "problem.hpp"

#include <algorithm>
#include <set>
#include <vector>
#include <map>

uint64_t fact(uint32_t n)
{
    uint64_t result{ 1 };
    for (uint32_t factor = n; factor > 1; factor--)
    {
        result *= factor;
    }
    return result;
}
uint64_t choose(uint32_t n, uint32_t c)
{
    return fact(n) / (fact(c)*fact(n - c));
}

std::array<size_t, ('z' - 'a') + 1> get_character_counts(std::string s)
{
    std::array<size_t, ('z' - 'a') + 1> result;
    result.fill(0);

    for (size_t index = 0; index < s.size(); index++)
    {
        result[s[index] - 'a']++;
    }

    return result;
}

int sherlockAndAnagrams(std::string s)
{
    int num_pairs{ 0 };
    std::map<std::array<size_t, ('z' -'a') + 1>, size_t> substring_count_map{};
    for (size_t start_index = 0; start_index < s.size(); start_index++)
    {
        for (size_t end_index = start_index + 1; end_index <= s.size(); end_index++)
        {
            auto substring = s.substr(start_index, end_index - start_index);
            auto char_counts = get_character_counts(substring);
            auto find_result = substring_count_map.find(char_counts);
            // have we seen this set of characters before?
            if (find_result == substring_count_map.end()) // No
            {
                // Add it to the map
                substring_count_map.emplace(char_counts, 1);
            }
            else // Yes
            {
                // Increase the count of times we have seen this set of characters
                substring_count_map[char_counts]++;
            }
        }
    }

    // Calculate the number of pairs from counts
    for (auto entry : substring_count_map)
    {
        size_t count = entry.second;
        if (count > 1)
        {
            num_pairs += choose(count, 2);
        }
    }

    return num_pairs;
}
