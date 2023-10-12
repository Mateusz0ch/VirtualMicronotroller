#include <string>
#include <iostream>
#include <type_traits>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
#include <string>
#include <vector>

std::string odd_or_even(const std::vector<int> &arr)
{
    return std::accumulate(arr.begin(), arr.end()) % 2 == 1 ? "odd" : "even"; // your code here
}

int main()
{
}