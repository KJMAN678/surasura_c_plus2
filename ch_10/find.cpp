#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<std::string> v;
    v.push_back("apple");
    v.push_back("orange");
    v.push_back("melon");
    v.push_back("banana");
    v.push_back("lemon");

    std::string s;

    std::cout << "探索するデータ: ";
    std::cin >> s;

    std::vector<std::string>::iterator it = std::find(v.begin(), v.end(), s);
    if (it != v.end())
    {
        std::cout << *it << "が見つかりました！" << std::endl;
    }
    else
    {
        std::cout << "見つかりません！" << std::endl;
    }

    return 0;
}