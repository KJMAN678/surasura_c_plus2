#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v;

    v.push_back(5);
    v.push_back(3);

    v.push_back(1);
    v.push_back(4);
    v.push_back(2);

    int length = v.size();

    std::cout << "整列前: ";

    for (int i = 0; i < length; i++)
    {
        std::cout << "[" << v[i] << "]";
    }
    std::cout << std::endl;

    std::sort(v.begin(), v.end());

    std::cout << "整列後: ";

    for (int i = 0; i < length; i++)
    {
        std::cout << "[" << v[i] << "]";
    }

    std::cout << std::endl;

    return 0;
}