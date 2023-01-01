#include <iostream>
#include <fstream>

int main()
{
    char data;

    std::ifstream fin("myFile.bin", std::ios::in | std::ios::binary);

    if (!fin.is_open())
    {
        std::cout << "ファイルをオープンできません！";

        return 1;
    }

    while (fin.get(data))
    {
        std::cout << "[" << (int)data << "]";
    }

    std::cout << std::endl;

    fin.close();

    return 0;
}