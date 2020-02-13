#include <sock_merchant.hpp>

// Complete the sockMerchant function below.
int sockMerchant(int n, std::vector<int> ar) {
    // Build a radix vector
    // Could use a map to be more space efficient,
    // but they are usually implemented as red black trees so there is some computational cost.

    std::vector<int> counts(100);
    int pair_count = 0;
    for (int sock : ar)
    {
        // Keep a count of socks in an array
        int sock_count = ++counts[sock-1];
        if (sock_count % 2 == 0)
        {
            pair_count++;
        }
    }

    return pair_count;
}
