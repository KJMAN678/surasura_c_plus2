#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> v;

    std::string s;

    do
    {
        std::cout << "文字列の入力: ";
        std::cin >> s;
        v.push_back(s);
    } while (s != "..");

    v.pop_back();

    int length = v.size();
    for (int i = 0; i < length; i++)
    {
        std::cout << "ベクトルの内容: " << v[i] << std::endl;
    }
}