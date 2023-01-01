#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string s;

    std::ifstream fin("myFile.txt");

    if (!fin.is_open())
    {
        std::cout << "ファイルをオープンできません！";

        return 1;
    }

    while (getline(fin, s))
    {
        std::cout << s << std::endl;
    }

    fin.close();

    return 0;
}