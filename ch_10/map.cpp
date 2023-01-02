#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<std::string, std::string> m;

    m.insert(std::make_pair("K001", "apple"));
    m.insert(std::make_pair("K005", "orange"));
    m.insert(std::make_pair("K003", "melon"));
    m.insert(std::make_pair("K002", "banana"));
    m.insert(std::make_pair("K004", "lemon"));

    std::string num;

    do
    {
        std::cout << "商品番号: ";
        std::cin >> num;

        if (m.count(num) != 0)
        {
            std::cout << "対応する商品名: " << m[num] << std::endl;
        }
    } while (num != "..");

    return 0;
}
